/*
Problem:
Given the starting and ending times of n movies at a festival, determine the maximum number of movies that can be watched completely without overlapping.

Example:
Input:
3
3 5
4 9
5 8

Output:
2

Approach:
Store each movie as {ending time, starting time} and sort the movies by their ending times. Greedily select the movie that finishes earliest, then continue selecting the next movie whose starting time is at least the ending time of the last selected movie. This strategy maximizes the number of movies watched.

Alternate Approach:
This problem can also be viewed as the classic Activity Selection Problem. Sort all activities by their finishing times and repeatedly choose the earliest finishing activity that is compatible with the previously selected one. The greedy proof guarantees an optimal solution.

Time Complexity:
O(n log n), due to sorting the movies. The greedy traversal afterward is linear.

Space Complexity:
O(n), for storing the movie intervals.

Edge Cases:
Only one movie, no overlapping movies, all movies overlapping, multiple movies having the same ending time, and movies where one starts exactly when another ends (these can both be watched).
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

void solve(){
    int n;
    cin>>n;
    vector<pair<int,int>> movies(n);
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        movies[i] = {b,a}; // {end_time, start_time}
    }
    sort(movies.begin(), movies.end());
    int cnt=1;
    auto it = movies.begin();
    int end_time = it->first;
    it++;
    for(it;it!=movies.end();it++){
        if(it->second>=end_time){
            cnt++;
            end_time=it->first;
        }
    }
    cout<<cnt<<endl;
}

int32_t main(){
    fastio;

    int t = 1;
    // cin >> t;

    while(t--)
        solve();

    return 0;
}