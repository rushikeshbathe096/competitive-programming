/*
Problem: Forbidden Integer

Description:
You are given an integer n which you want to obtain. You have an unlimited supply of every integer from 1 to k, except integer x (there are no integer x at all). You are allowed to take an arbitrary amount of each of these integers (possibly zero). Determine whether it is possible to make the sum of taken integers equal to n. If yes, print any valid combination.

Input:
t test cases.For each test case- Three integers n, k, x

Output:
For each test case:- "YES" or "NO" whether it's possible.
- If YES, first line: integer m — number of integers taken
- Second line: m integers (each from 1 to k, not equal to x) whose sum is n

Approach:
If x != 1, answer is YES and fill array with 1s.If x == 1:- If k == 1 or (k == 2 and n is odd) → NO
  - Else if n is even → fill array with n/2 twos
  - Else if n is odd and k >= 3 → start with 3, then fill rest with 2s
*/

#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr)
#define endl '\n'
#define int long long
typedef long long ll;
#define pb push_back
typedef vector<int> vi;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    if(x != 1){
        cout << "YES" << endl;
        cout << n << endl;
        vi a(n, 1);
        for(int v : a) cout << v << " ";
        cout << endl;
    }
    else if(k == 1 || (k == 2 && n % 2 == 1)){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
        vi a;
        if(n % 2 == 1){
            a.pb(3);
            n -= 3;
        }
        while(n > 0){
            a.pb(2);
            n -= 2;
        }
        cout << a.size() << endl;
        for(int v : a) cout << v << " ";
        cout << endl;
    }
}

int32_t main() {
    fastio;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
