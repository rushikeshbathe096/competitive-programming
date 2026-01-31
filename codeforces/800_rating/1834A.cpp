/*
Problem: Unit Array

Description:
Given an array a of length n containing only -1 and 1. An array is called good if both of the following hold: the sum of all elements is non-negative and the product of all elements is 1. In one operation, you can flip any element (change 1 to -1 or -1 to 1). Determine the minimum number of operations needed to make the array good.

Input:
t test cases. For each test case:- Integer n — length of the array a, n integers a1, a2, ..., an (ai = ±1)

Output:
For each test case:- Single integer — the minimum number of operations needed to make the array good.

Approach:
Count the number of 1s and -1s. If the sum is positive and the count of -1 is even then ans is 0 else ans is 1. If sum is negative then we find the diff and divide diff +1 by 2 and add to ans,this satisfies sum condn after that we subtrct ans from negative count and then add neg%2 to ans
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
    int pos=0,neg=0;
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==1)pos++;
        else neg++;
    }
    if(pos>=neg){
        cout<<(neg&1?1:0)<<endl;
        return ;
    }
    else{
        int diff=neg-pos;
        ans+=((diff+2-1)/2);
        neg-=ans;
        ans+=(neg%2);
        cout<<ans<<endl;
    }
}


int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}