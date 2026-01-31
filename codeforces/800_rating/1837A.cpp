/*
Problem: Grasshopper Jumps

Description:
You are given two integers x and k. A grasshopper starts at point 0 on the OX axis.In one move, it can jump some integer distance, not divisible by k, to the left or right. Determine the smallest number of moves it takes to reach point x, and print any valid sequence of moves.

Input:
t test cases.For each test case:- Two integers x and k

Output:
For each test case:- First line: n — the minimal number of moves. Second line: n integers — the moves (positive for right, negative for left), none divisible by k.

Approach:
- If x is not divisible by k, one jump of x .
- If x is divisible by k, use two jumps: x-1 and 1 (both not divisible by k). 
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
    int x, k;
    cin >> x >> k;
 
    if(x % k != 0){
        cout << 1 << endl;
        cout << x << endl;
    }
    else{
        cout << 2 << endl;
        cout << x - 1 << " " << 1 << endl;
    }
}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}