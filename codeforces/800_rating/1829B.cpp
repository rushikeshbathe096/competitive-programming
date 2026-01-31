/*
Problem: Blank Space

Description:
You are given a binary array a of n elements (consisting of 0s and 1s). A blank space is a segment of consecutive 0s. Determine the length of the longest blank space in the array.

Input:
t test cases. For each test case:- Integer n — length of the array, n integers a1, a2, ..., an — elements of the array (0 or 1)

Output:
For each test case:- A single integer — the length of the longest blank space.

Approach:
Traverse the array maintaining two variables len and maxlen; increment len if the element is 0, reset len to 0 otherwise, and keep updating maxlen — the final maxlen is the answer.
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
    cin >> n;
    vi a(n);
    int len,maxlen=0;
    for (int i = 0; i < n; i++){
        cin>>a[i];
        if(a[i]==0){
            len++;
            maxlen=max(len,maxlen);
        }
        else len=0;
    }
    cout<<maxlen<<endl;
}


int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}