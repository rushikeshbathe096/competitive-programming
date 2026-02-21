/*
Problem: Repetitions

Description:
You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input:
- string of n characters

Output:
- length of longest repetition

Approach:
- Iterate through the string and count consecutive characters. Keep track of the maximum count for any character

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
    string s;
    cin>>s;
    int cnt=1,maxcnt=1;
    for(int i=1;i<s.size();i++){
        if(s[i]==s[i-1]){   
            cnt++;
        }
        else{
            cnt=1;
        }
        maxcnt=max(maxcnt,cnt);
    }
    cout<<maxcnt<<endl;
}

int32_t main() {
    fastio;

    int t = 1;
    //cin >> t;
    while (t--) solve();

    return 0;
}