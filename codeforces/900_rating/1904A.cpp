/*
Problem: A. Forked!

Description:
Given a modified knight that moves a tiles in one direction and b tiles in the other, find the number of positions from which the knight can
attack both the king and the queen.

Approach:
A knight has 8 possible positions from which it can attack a given cell. We generate all 8 possible positions for the king and store them in a set.
Then, we generate all 8 possible positions for the queen and check how many of them are also present in the king's set.
The common positions are exactly the cells from which the knight can attack both the king and the queen.

TC: O(1)
Only 8 possible moves are checked for each piece. Set operations are also constant because the number of elements is at most 8.

SC: O(1)
We store at most 8 positions for each piece.
*/
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)

#define int long long
#define ll long long
#define ld long double

#define pb push_back
#define ff first
#define ss second

#define endl '\n'

#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())

typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;

typedef set<int> st;
typedef unordered_set<int> ust;

typedef map<int,int> mp;
typedef unordered_map<int,int> ump;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX;

int binexp(int a, int b){
    a %= MOD;
    int ans = 1;

    while(b){
        if(b & 1)
            ans = (ans * a) % MOD;

        a = (a * a) % MOD;
        b >>= 1;
    }

    return ans;
}

bool isPrime(int n){
    if(n < 2) return false;

    for(int i = 2; i * i <= n; i++){
        if(n % i == 0)
            return false;
    }

    return true;
}

void solve() {
    int a, b;
    cin >> a >> b;

    int xK, yK, xQ, yQ;
    cin >> xK >> yK;
    cin >> xQ >> yQ;

    vector<pair<int,int>> moves = {
        {a, b}, {a, -b},
        {-a, b}, {-a, -b},
        {b, a}, {b, -a},
        {-b, a}, {-b, -a}
    };

    set<pair<int,int>> king, queen;

    for (auto [dx, dy] : moves) {
        king.insert({xK + dx, yK + dy});
        queen.insert({xQ + dx, yQ + dy});
    }

    int ans = 0;

    for (auto pos : king) {
        if (queen.count(pos))
            ans++;
    }

    cout << ans << '\n';
}

int32_t main(){
    fastio;

    int t = 1;
    // cin >> t;

    while(t--)
        solve();

    return 0;
}