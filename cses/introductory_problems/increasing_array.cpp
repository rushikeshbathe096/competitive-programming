/*
Problem: Repetitions

Description:
Modify array such that it is increasing

Input:
- n -size of array and array of n integers

Output:
- min no of moves to make array increasing

Approach:
- Iterate through the string and count consecutive characters. Keep track of the maximum count for any character
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
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int moves=0;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            moves+=(a[i-1]-a[i]);
            a[i]=a[i-1];
        }
    }
    cout<<moves<<endl;
}

int32_t main() {
    fastio;

    int t = 1;
    //cin >> t;
    while (t--) solve();

    return 0;
}