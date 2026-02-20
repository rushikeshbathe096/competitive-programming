/*
Problem: Trailing Zeros in Factorial

Description:
Given an integer n, calculate the number of trailing zeros in n!.
Trailing zeros are produced by factors of 10, which come from pairs of 2 and 5 in the factorial.
Since there are always more factors of 2 than 5, counting the number of 5s in n! gives the answer.

Input:
- n : a single integer (1 ≤ n ≤ 10^9)

Output:
- Print the number of trailing zeros in n!.

Example:
Input:
20
Output:
4

Approach / Notes:
- Count how many times 5 divides numbers from 1 to n:
    - zeros = n/5 + n/25 + n/125 + ... until n/(5^k) = 0
- This gives the number of trailing zeros in O(log_5 n) time.
*/

#include <bits/stdc++.h>
 
using namespace std;
 
#define fastio ios::sync_with_stdio(false);cin.tie(nullptr)
#define endl '\n'
#define int long long
typedef long long ll;
#define pb push_back
#define all(v) v.begin(), v.end()
 
typedef vector < int > vi;
typedef set < int > st;
typedef unordered_set < int > ust;
typedef map < int, int > mp;
typedef unordered_map < int, int > ump;
typedef pair < int, int > p;
 
void solve() {
    int n;
    cin>>n;
    int ans=0;
    while(n){
        n/=5;
        ans+=n;
    }
    cout<<ans<<endl;
}
 
int32_t main() {
    fastio;
 
    int t = 1;
    //cin >> t;
    while (t--) solve();
 
    return 0;
}
