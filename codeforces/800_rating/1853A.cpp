/*
Problem: Desorting

Description:
Given an array a of length n, you can perform the following operation any number of times- Choose an index i (1 ≤ i ≤ n-1), add 1 to a[1..i], subtract 1 from a[i+1..n].Determine the minimum number of operations needed to make the array NOT sorted in non-decreasing order.

Input:
t test cases.
For each test case- Integer n: length of the array, n integers a1, a2, ..., an

Output:
For each test case: Minimum number of operations needed to make the array not sorted.

Approach:
If the array is already not sorted, answer is 0. Otherwise, find the minimum difference between consecutive elements and return min_diff / 2 + 1 since we can perform both addition and subtraction in one operation.
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
    int op=1e9;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1]){
            cout<<0<<endl;
            return;
        } 
        op=min(op,a[i]-a[i-1]);
    }
    op=op/2+1;
    cout<<op<<endl;
 
}
 
int32_t main() {
    fastio;
 
    int t = 1;
    cin >> t;
    while (t--) solve();
 
    return 0;
}