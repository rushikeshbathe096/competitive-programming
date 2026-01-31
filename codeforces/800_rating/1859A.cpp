/*
Problem: United We Stand

Description:
Given an array a of length n, split it into two non-empty arrays b and c such that for every bi in b and every cj in c, cj is not a divisor of bi.

Input:
t test cases.
For each test case:
- Integer n: length of array a
- n integers a1, a2, ..., an

Output:
For each test case:
- Output -1 if such arrays do not exist. Otherwise, output lengths and elements of arrays b and c.

Approach:
Push all occurrences of the minimum element into array b and all remaining elements into array c; if array c is empty, output -1, otherwise output b and c.
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
    int n;
    cin>>n;
    vi a(n);
    int mini=LLONG_MAX;
    for(int i=0;i<n;i++){
        cin>>a[i];  
        mini=min(mini,a[i]);
    }
    vi b;
    vi c;
    for(int i=0;i<n;i++){
        if(a[i]==mini){
            b.pb(a[i]);
        }
        else{
            c.pb(a[i]);
        }
    }
    int lb=b.size();
    int lc=c.size();
    if(lc==0){
        cout<<-1<<endl;
        return;
    }
    cout<<lb<<" "<<lc<<endl;
    for(int i=0;i<lb;i++){
        cout<<b[i]<<" ";    
    }
    cout<<endl;
    for(int i=0;i<lc;i++){
        cout<<c[i]<<" ";
    }
    cout<<endl;

}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}