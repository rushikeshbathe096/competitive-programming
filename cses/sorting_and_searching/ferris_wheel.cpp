/*
Problem:
Given the weights of children and the maximum allowed weight in a gondola, determine the minimum number of gondolas needed if each gondola can carry at most two children.

Example:
Input: 4 10 | 7 2 3 9
Output: 3

Approach:
Sort the children's weights and use two pointers. Pair the lightest and heaviest child whenever their combined weight does not exceed the limit; otherwise, place the heaviest child alone. Count each gondola used.

Time Complexity:
O(n log n), due to sorting the weights followed by a linear two-pointer traversal.

Space Complexity:
O(1) excluding the input array, as only a few extra variables are used.

Edge Cases:
A single child, all children requiring separate gondolas, every child being pairable, duplicate weights, and the lightest and heaviest child exactly matching the weight limit.
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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(all(a));
    int cnt=0;
    int i=0,j=n-1;
    while(i<=j){
        if(a[i]+a[j]<=x){
            cnt++;
            i++;j--;
        }
        else{
            cnt++;
            j--;
        }
    }
    cout<<cnt<<endl;
}

int32_t main(){
    fastio;

    int t = 1;
    // cin >> t;

    while(t--)
        solve();

    return 0;
}