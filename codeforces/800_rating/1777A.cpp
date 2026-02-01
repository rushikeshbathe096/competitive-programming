/*
Problem: Everybody Likes Good Arrays!

Description:
An array a is good if for all pairs of adjacent elements, ai and ai+1 (1≤i<n) are of different parity. Note that an array of size 1 is trivially good.In one operation you can select any pair of adjacent elements in which both elements are of the same parity, delete them, and insert their product in the same position.Find the minimum number of operations to form a good array.

Input:
t test cases. For each test case:- Integer n — length of array a, n integers a1,a2,…,an

Output:
For each test case, print an integer — the minimum number of operations required to form a good array.

Approach:
Count all adjacent pairs of elements that have the same parity(a[i]%2 == a[i-1]%2). Each such pair requires one operation, so the count is the answer.
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
    int x=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int cnt=0;
    for(int i=1;i<n;i++){
        if(a[i]%2==a[i-1]%2){
            cnt++;
        }
    }
    cout<<cnt<<endl;
}


int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}