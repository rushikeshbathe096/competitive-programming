/*
Problem: A. Two Permutations

Description:
Given n, a, and b, determine whether there exist two permutations p and q
of length n such that:
- Their longest common prefix has length exactly a.
- Their longest common suffix has length exactly b.

Approach:
The prefix and suffix must be different parts of the permutations,
so normally we need at least 2 positions left between them to make
both common parts stop exactly at a and b.

Therefore, if a + b <= n - 2, the answer is YES.

The only special case is when both permutations are completely identical,
which happens when a = b = n. In this case, the answer is also YES.

Otherwise, the answer is NO.

TC: O(1)
Only a few integer comparisons are needed.

SC: O(1)
Only constant extra space is used.
*/
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

#define int long long
#define ll long long
#define ld long double

#define pb push_back
#define ff first
#define ss second

#define endl '\n'

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

typedef set<int> st;
typedef unordered_set<int> ust;

typedef map<int,int> mp;
typedef unordered_map<int,int> ump;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX;

int binexp(int a, int b){
    a %= MOD;
    int ans = 1;

    while(b){
        if(b & 1)
            ans = (ans * a) % MOD;

        a = (a * a) % MOD;
        b >>= 1;
    }

    return ans;
}

bool isPrime(int n){
    if(n < 2) return false;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }

    return true;
}

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if((a+b<=n-2) || (a==b && b==n))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int32_t main(){
    fastio;

    int t = 1;
    cin >> t;

    while(t--)
        solve();

    return 0;
}