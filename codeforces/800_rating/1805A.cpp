/*
Problem: We Need the Zero

Description:
You are given an array a consisting of non-negative integers. You can choose an integer x and define a new array b such that bi = ai ⊕ x for all 1 ≤ i ≤ n, where ⊕ denotes the bitwise XOR operation. Determine whether there exists an integer x such that b1 ⊕ b2 ⊕ … ⊕ bn equals 0.

Input:
t test cases.
For each test case:- An integer n — the length of the array. n integers a1, a2, …, an (0 ≤ ai < 2^8).

Output:
For each test case:- Print an integer x (0 ≤ x < 2^8) if such a value exists, otherwise print -1.

Approach:
a^0=a, a^a=0, XOR is commutative and associative. So the expression is bi^x=(a1^x)^(a2^x)^...^(an^x) = (a1^a2^...^an) ^ (x^x(n times)).Now in case n is even, x^x(n times)=0, so we need a1^a2^...^an=0, if n is odd, x^x(n times)=x, so we need a1^a2^...^an=x. Thus if n is even and the XOR of all elements is 0 ans is 0 or random x, if xor of all elements is not 0 the value of x is -1, if n is odd, we can choose x as the XOR of all elements.
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
    int x=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        x=x^a[i];
    }
    if(n&1)cout<<x<<endl;
    else cout<<(x==0?x:-1)<<endl;
}


int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}