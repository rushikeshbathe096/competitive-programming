/*
Problem: Goals of victory

Description:
There are n teams in a football tournament where each pair plays exactly once. The efficiency of a team is defined as the total goals it scores minus the total goals scored by its opponents. After the tournament, the efficiencies of n−1 teams are known. Find the efficiency of the missing team. The answer is unique.

Input:
t test cases.
For each test case:
- Integer n
- n−1 integers a1...a(n−1)

Output:
For each test case:
- Integer: efficiency of the missing team

Approach:
Find the sum of the given efficiencies. Since every goal scored by one team is conceded by another, the sum of efficiencies of all teams must be zero. Therefore, the missing efficiency is the negative of the sum.
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
    for(int i=0;i<n-1;i++){
        cin>>a[i];
        sum+=a[i];
    }
    
    cout<<-sum<<endl;
}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}