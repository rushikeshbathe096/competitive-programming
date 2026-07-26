/*
Problem:
Given the prices of concert tickets and the maximum price each customer is willing to pay, assign each customer the most expensive ticket that does not exceed their budget. Each ticket can be sold only once. Print the price of the ticket assigned to each customer, or -1 if no suitable ticket is available.

Example:
Input: 5 3 | 5 3 7 8 5 | 4 8 3
Output: 3 8 -1

Approach:
Store all ticket prices in a multiset to maintain them in sorted order. For each customer, use upper_bound() to find the first ticket with a price greater than the customer's budget. If such an iterator is at the beginning, no valid ticket exists. Otherwise, move one step back to obtain the largest ticket within the customer's budget, print it, and remove it from the multiset.

Time Complexity:
O((n + m) log n), where building the multiset takes O(n log n) and each customer query performs an upper_bound() and erase() operation in O(log n).

Space Complexity:
O(n), for storing the ticket prices in the multiset.

Edge Cases:
No ticket is affordable for a customer, multiple tickets have the same price, all tickets are sold before all customers are served, customers have budgets smaller than the cheapest ticket, and customers have budgets larger than the most expensive remaining ticket.
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
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(int i = 0; i < n; i++) cin>>a[i];
    multiset<int> tickets(a.begin(), a.end());
    while(m--){
        int b;
        cin>>b;
         // Find the first ticket with price greater than the customer's budget.
        auto it =tickets.upper_bound(b);
        // No ticket with price <= budget exists.
        if(it==tickets.begin()) cout<<-1<<endl;
        else{
            // Move to the largest ticket within the customer's budget.
            it--;
            cout<<*it<<endl;
            tickets.erase(it);
        }
    }
}

int32_t main(){
    fastio;

    int t = 1;
    // cin >> t;

    while(t--)
        solve();

    return 0;
}