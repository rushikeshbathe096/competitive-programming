/*
Problem: Array Colouring

Description:
Given an array of n integers, determine if it's possible to color all elements in two colors such that:
1. Each color has at least one element.2. The sums of the elements of both colors have the same parity.

Input:
t test cases.
For each test case: Integer n: length of the array, n integers a1, a2, ..., an

Output:
For each test case- "YES" if possible to color as described ,"NO" otherwise

Approach:
If the sum of the array is odd, output NO; otherwise, output YES. We can also count no of odd elements in the array if there are even no of odd elements then also we can colour the array
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
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum&1){
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;

}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}