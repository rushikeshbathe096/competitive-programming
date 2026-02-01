/*
Problem: Extremely Round

Description:
A positive integer is called extremely round if it has exactly one non-zero digit. Given n, count all extremely round integers x such that 1≤ x ≤n.

Input:
t test cases.For each test case:- An integer n (1 ≤ n ≤ 999999)

Output:
For each test case:- The count of extremely round numbers ≤ n

Approach:
- An extremely round number has the form d * 10^k where d ∈ [1, 9], k ≥ 0.- Iterate over d = 1..9 and powers of 10 until exceeding n, count all numbers ≤ n
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
    cin >> n;
    int cnt = 0;
    int place=1;
    while(place<=n){
        for(int d=1;d<=9;d++){
            if(d*place<=n)cnt++;
        }
        place*=10;
    }
    cout << cnt << endl;
}




int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}