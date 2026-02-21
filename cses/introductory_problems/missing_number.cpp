/*
Problem: Missing Number

Description:
You are given all numbers between 1,2,...,n except one. Your task is to find the missing number.

Input:
- n : a single integer (1 ≤ n ≤ 10^6)

Output:
Print missing number

Approach:
- find sum of all elements from 1 to n and subtract the sum of given nos
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
    
}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}