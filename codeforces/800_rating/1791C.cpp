/*
Problem: Prepend and Append

Description:
Timur starts with a binary string s (possibly empty). He repeatedly performs the following operation any number of times:- Add '0' to one end of the stringand  Add '1' to the other end of the string(order does not matter) You are given the final binary string. Determine the minimum possible length of the original string Timur could have started with.

Input:
t test cases.For each test case:- Integer n: length of the final stringfollowed by Binary string s of length n

Output:
For each test case:- A single integer: the minimum possible length of the original string.

Approach:
We take 2 pointer l and r at start and end and we check if boh ends are different of yes we move both both pointer ,if the condn is brekakes that is the initial string and the length of string is l-r+1
*/
#include <bits/stdc++.h>

using namespace std;

#define fastio ios::sync_with_stdio(false);cin.tie(nullptr)
#define endl '\n'
#define int long long
typedef long long ll;
#define pb push_back
#define all(v) v.begin(), v.end()

typedef vector < int > vi;
typedef set < int > st;
typedef unordered_set < int > ust;
typedef map < int, int > mp;
typedef unordered_map < int, int > ump;
typedef pair < int, int > p;

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l=0,r=n-1;
    while(l<r && s[l]!=s[r]){
        l++;
        r--;
    }
    cout<<r-l+1<<endl;
}




int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}