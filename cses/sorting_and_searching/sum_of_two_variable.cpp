/*
Problem:
Given an array of n integers and a target sum x, find two distinct positions such that the corresponding values add up to x. If no such pair exists, print "IMPOSSIBLE".

Example:
Input:
4 8
2 7 5 1

Output:
2 4

Approach:
Traverse the array while maintaining a hash map that stores each visited value and its index. For every element, compute its complement (x - current value). If the complement already exists in the hash map, output the two indices. Otherwise, store the current value and continue.

Alternate Approach:
Store each element along with its original index, sort the array by value, and use the two-pointer technique. If the current sum is less than x, move the left pointer; if greater, move the right pointer; otherwise, output the original indices.

Time Complexity:
Current Approach: O(n) average, due to constant-time hash map operations.
Alternate Approach: O(n log n), due to sorting followed by a linear two-pointer traversal.

Space Complexity:
Current Approach: O(n), for the hash map.
Alternate Approach: O(n), for storing values with their original indices.

Edge Cases:
No valid pair exists, multiple valid pairs (any one may be printed), duplicate values, target formed by two identical values at different positions, and very large array values.
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
    int n,x;
    cin>>n>>x;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    map<int,int> mp;
    for(int i=0;i<n;i++){
        int comp=x-a[i];
        if(mp.find(comp)!=mp.end()){
            cout<<mp[comp]+1<<" "<<i+1<<endl;
            return;
        }
        mp[a[i]]=i;
    }
    cout<<"IMPOSSIBLE"<<endl;
}

int32_t main(){
    fastio;

    int t = 1;
    // cin >> t;

    while(t--)
        solve();

    return 0;
}