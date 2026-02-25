/*
Problem: Bit Strings

Description:
Calculate total no of bit strings of length n
Input:
- n : a single integer

Output:
- Print the result modulo 10^9 + 7

Example:
Input:
3
Output:
8

Approach :
- Use binary exponentiation: while n > 0, multiply ans by base if the current bit is 1, square the base, and shift n right.
*/
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
typedef long long ll;
#define pb push_back
#define all(v) v.begin(), v.end()

const int MOD = 1e9 + 7;
const int INF = 1e18;

typedef vector<int> vi;
typedef set<int> st;
typedef unordered_set<int> ust;
typedef map<int,int> mp;
typedef unordered_map<int,int> ump;
typedef pair<int,int> p;

void solve() {
    int n;
    cin>>n;
    int ans=1;
    int base =2;
    while(n>0){
        if(n&1)ans=(ans*base)%MOD;
        base=(base*base)%MOD;
        n>>=1;
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