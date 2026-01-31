/*
Problem: Walking Master

Description:
YunQian starts at point (a, b) on an infinite Cartesian plane. In one move, she can either move to the diagonally adjacent point (x+1, y+1) or move to the adjacent point on the left (x−1, y). Given a target point (c, d), determine the minimum number of moves required to reach it, or declare that it is impossible.

Input:
t test cases. For each test case:- Four integers a, b, c, d representing the start and end coordinates.

Output:
For each test case:- A single integer representing the minimum number of moves, or -1 if it is impossible.

Approach:
If d < b, it is impossible since y can only increase. Otherwise, first make (d−b) diagonal moves to reach y = d, updating a accordingly. If the resulting a is less than c, output -1; else add c-a to the moves
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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(d<b){
        cout<<-1<<endl;
        return;
    }
    int moves=d-b;
    a+=moves;
    if(c>a){
        cout<<-1<<endl;
        return;
    }
    moves+=abs(c-a);
    cout<<moves<<endl;
}


int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}