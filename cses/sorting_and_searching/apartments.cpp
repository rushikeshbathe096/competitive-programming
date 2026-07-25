/*
Problem:
Given the desired apartment sizes of applicants and the available apartment sizes, assign apartments so that the maximum number of applicants receive an apartment, where an apartment is acceptable if its size differs by at most k.

Example:
Input: 4 3 5 | 60 45 80 60 | 30 60 75
Output: 2

Approach:
Sort both the applicants and apartment sizes, then use two pointers to greedily match the smallest suitable apartment with each applicant. If the current apartment is too small, move to the next apartment; if it is too large, move to the next applicant.

Time Complexity:
O(n log n + m log m), due to sorting both arrays, followed by a linear two-pointer traversal.

Space Complexity:
O(1) excluding the input arrays, as only a few extra variables are used.

Edge Cases:
No applicants or apartments can be matched, k equals zero requiring exact matches, all apartments are too small or too large, and multiple applicants or apartments having the same size.
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
    int n,m,k;
    cin>>n>>m>>k;
    vector<int> a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    sort(all(a));
    sort(all(b));
    int cnt=0;
    int i=0,j=0;
    while(i<n && j<m){
        if(b[j] >= a[i] - k && b[j] <= a[i] + k){
            cnt++;
            i++;
            j++;
        }
        else if(b[j]<a[i]-k)j++;
        else i++;
    }
    cout << cnt << endl;
}

int32_t main(){
    fastio;

    int t = 1;
    // cin >> t;

    while(t--)
        solve();

    return 0;
}