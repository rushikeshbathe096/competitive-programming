/*
Problem:
Given the lengths of n sticks, modify each stick so that all sticks have the same length. The cost of changing a stick is the absolute difference between its old and new length. Find the minimum total cost.

Approach:
1. Sort the stick lengths.
2. Choose the median as the target length.
3. Sum the absolute differences between each stick and the median.

Why it works:
The median minimizes the sum of absolute deviations.

Time Complexity:
O(n log n)

Space Complexity:
O(1) (excluding input storage)

Genuine Edge Cases:
- Total cost can exceed 32-bit integer range, so use long long.
- For even n, any value between the two middle elements gives the same minimum cost.
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
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    sort(a.begin(), a.end());
    if(n&1){
        int med=n/2;
        int cnt=0;
        for(int i=0;i<n;i++){
            cnt+=abs(a[i]-a[med]);
        }
        cout<<cnt<<endl;
    }
    else{
        int med1=n/2-1,med2=n/2;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            cnt1+=abs(a[i]-a[med1]);
            cnt2+=abs(a[i]-a[med2]);
        }
        cout<<min(cnt1,cnt2)<<endl;
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