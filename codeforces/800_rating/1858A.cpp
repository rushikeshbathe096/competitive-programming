/*
Problem: Buttons

Description:
There are a + b + c buttons: a can only be pressed by Anna, b can only be pressed
by Katie, and c can be pressed by either. Anna moves first, and the player who
cannot make a move loses. Determine the winner if both play optimally.

Input:
t test cases.
For each test case:
- Three integers a, b, c.

Output:
For each test case:
- Output "First" if Anna wins, otherwise output "Second".

Approach:
If a > b, Anna wins; if b > a, Katie wins; otherwise, the parity of c decides the
winner (odd → First, even → Second).
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
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)cout<<"First"<<endl;
    else if(b>a)cout<<"Second"<<endl;
    else cout<<(c&1?"First":"Second")<<endl;

}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}