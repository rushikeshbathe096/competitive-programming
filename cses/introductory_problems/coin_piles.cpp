/*
Problem: Repetitions

Description:
You have two coin piles containing a and b coins. On each move, you can either remove one coin from the left pile and two coins from the right pile, or two coins from the left pile and one coin from the right pile.
Your task is to efficiently find out if you can empty both the piles.

Input:
- t -no of test cases and for each test case two integers a and b

Output:
- "YES" if both piles can be emptied, otherwise "NO"

Approach:
- there are 2 condn if a+b  is divisible by 3 and min(a,b) should be less than equal to 2*max(a,b)
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
    int a,b;
    cin>>a>>b;
    if((a+b)%3==0 && min(a,b)*2>=max(a,b)){
        cout<<"YES"<<endl;  
    }
    else{
        cout<<"NO"<<endl;
    }
}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}