/*
Problem: Weird Algorithm

Description:
3->10->5->16->8->4->2->1

Input:
- n : a single integer (1 ≤ n ≤ 10^6)

Output:
Print a line that contains all values of n during the algorithm

Approach:
- if n is odd then n = 3*n + 1 else n = n/2 repeat until n becomes 1
*/
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
typedef long long ll;
#define pb push_back
#define all(v) v.begin(), v.end()

typedef vector<int> vi;
typedef set<int> st;
typedef unordered_set<int> ust;
typedef map<int,int> mp;
typedef unordered_map<int,int> ump;
typedef pair<int,int> p;

void solve() {
    ll n;
    cin>>n;
    cout<<n<<" ";
    while(n!=1){
        
        if(n%2!=0){
            n=3*n+1;
            cout<<n<<" ";
        }
        else if(n%2==0){
            n/=2;
            cout<<n<<" ";
        }
    }
}


int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}