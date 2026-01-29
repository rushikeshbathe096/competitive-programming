/*
Problem: B. Sequence Game

Description:
Vika forms sequence b from sequence a by writing a1, then writing ai (i>1) only if ai-1 <= ai. Given b, construct any valid sequence a that produces b.The length of a must satisfy n <= m <= 2n.

Input:
t test cases.
For each test case:
- Integer n: length of b
- n integers b1...bn

Output:
For each test case:
- Integer m: length of a, m integers a1...am

Approach:
Append the first element of b to a.For each next element, compare it with the previous element in b:
- If it is greater than or equal, append it to a
- Otherwise, append 1 and then append the current element
*/
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
typedef long long ll;
#define pb push_back
#define mp make_pair
#define all(v) v.begin(), v.end()

typedef vector<int> vi;
typedef set<int> st;
typedef unordered_set<int> ust;
typedef map<int,int> mp;
typedef unordered_map<int,int> ump;
typedef pair<int,int> p;

void solve(){
    int n;
    cin>>n;
    vi b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    vi a;
    a.pb(b[0]);
    for(int i=1;i<n;i++){
        if(b[i]>=b[i-1])a.pb(b[i]);
        else{
            a.pb(1);
            a.pb(b[i]);
        }
    }
    cout << a.size() << endl;
    for(int i : a) cout << i << " ";
    cout << endl;

}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}