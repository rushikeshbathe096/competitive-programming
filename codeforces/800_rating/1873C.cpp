/*
Problem: Target Practice

Description:
A 10×10 target consists of 5 concentric rings with points:
- Outermost ring → 1 point
- Next ring → 2 points
- ...
- Center ring → 5 points
You are given a 10×10 grid for each test case:
- 'X' → arrow hit
- '.' → empty
Determine the total points scored by all arrows.

Input:
- First line: integer t — number of test cases (1 ≤ t ≤ 1000)
- For each test case: 10 lines of 10 characters ('X' or '.')

Output:
- For each test case, print a single integer — total points scored.

/*
Approach:
For each cell (i, j) with 'X', compute the minimum distance to any edge:
   - m = min(i, j, 9-i, 9-j) , Ring points = m + 1 (outermost = 1, center = 5), Sum points of all 'X' in the 10x10 grid
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
    int ans=0;
    
    for(int i=0;i<10;i++){
        string s;
        cin>>s;
        for(int j=0;j<10;j++){
            
            if(s[j]=='X'){
                int m1=min(i,j);
                int m2=min(9-i,9-j);
                int m=min(m1,m2);
                ans+=m+1;
            }
        }
    }
    cout<<ans<<endl;
}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}