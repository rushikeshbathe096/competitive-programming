/*
Problem: Twin Permutations

Description:
You are given a permutation a of length n. Find any permutation b of length n such that a1+b1 ≤ a2+b2 ≤ ... ≤ an+bn. It can be proven that such a permutation b always exists.

Input:
t test cases. For each test case:
- Integer n — length of the permutations a and b
- n integers a1, a2, ..., an — elements of permutation a

Output:
For each test case:
- n integers — a permutation b that satisfies the constraints.

Approach:
Construct b as n-a[i]+1 for each i , so that ai+bi = constant 
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
    vi a(n), b(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) b[i] = n - a[i]+1;
    for (int i = 0; i < n; i++) cout << b[i] << " ";
    cout << endl;
}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}