/*
Problem:
Given a list of integers, determine how many distinct values appear in the list.

Example:
Input: 5 2 3 2 2 3
Output: 2

Approach:
Store all the numbers in a set, which automatically removes duplicates, and output the size of the set as the number of distinct values.

Time Complexity:
O(n log n), where n is the number of integers, because each insertion into the set takes O(log n).

Space Complexity:
O(n), as the set may store all numbers if they are distinct.

Edge Cases:
An array with all identical elements, all distinct elements, a single element, and negative or large integer values.
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
    cin >> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    set<int> s(a.begin(), a.end());
    cout << s.size() << endl;
}

int32_t main(){
    fastio;

    int t = 1;
    // cin >> t;

    while(t--)
        solve();

    return 0;
}