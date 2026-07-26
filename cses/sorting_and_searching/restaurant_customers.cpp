/*
Problem:
Given the arrival and leaving times of customers in a restaurant, determine the maximum number of customers present in the restaurant at any moment.

Example:
Input:
3
5 8
2 4
3 9

Output:
2

Approach:
Treat each arrival as a +1 event and each departure as a -1 event. Store all events in a single array and sort them by time. Traverse the events in chronological order, updating the current number of customers after each event and keeping track of the maximum value encountered.

Alternate Approach:
Store all arrival times and departure times in two separate arrays and sort both. Use two pointers: if the next arrival occurs before the next departure, increment the current customer count and move the arrival pointer; otherwise decrement the count and move the departure pointer. Track the maximum count throughout the traversal.

Time Complexity:
O(n log n), due to sorting the 2n events. The traversal afterward is linear.

Space Complexity:
O(n), as an array of 2n events is stored.

Edge Cases:
Only one customer, customers with overlapping intervals, customers leaving exactly when another arrives (arrival and departure times are distinct, so no tie handling is needed), and all customers being present simultaneously.
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
    int n;
    cin>>n;
    vector<pair<int,int>> p;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        p.push_back({a,1});
        p.push_back({b,-1});
    }
    sort(p.begin(),p.end());
    int cnt=0,maxcnt=0;
    for(auto a:p){
        cnt+=a.second;
        maxcnt=max(maxcnt,cnt);
    }
    cout<<maxcnt<<endl;
}

int32_t main(){
    fastio;

    int t = 1;
    // cin >> t;

    while(t--)
        solve();

    return 0;
}