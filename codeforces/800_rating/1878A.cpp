/*
Problem: How Much Does Daytona Cost?

Description:
Given an array a of size n and an integer k, determine if there exists a non-empty subsegment of a where k is the most common element.

Input Format:
- The first line contains an integer t — the number of test cases.
- For each test case:
    - The first line contains two integers n and k — the size of the array and the target element.
    - The second line contains n integers a1, a2, ..., an — the elements of the array.

Output Format:
For each test case, print "YES" if there exists a subsegment where k is the most common element, otherwise print "NO".

Approach:
If k appears at least once in the array, the single-element subsegment containing k is valid, so output "YES". Otherwise, output "NO".
*/
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
typedef long long ll;
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()

typedef vector<int> vi;
typedef set<int> st;
typedef unordered_set<int> ust;
typedef map<int,int> mp;
typedef unordered_map<int,int> ump;
typedef pair<int,int> p;

void solve() {
    int n,k;
    cin>>n>>k;
    vi a(n);
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==k)flag=true;
    }
    cout<<(flag?"Yes":"No")<<endl;
    
}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}