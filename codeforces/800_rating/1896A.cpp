/*
Problem: A. Jagged Swaps

Description:
You are given a permutation of size n. You may perform an operation where you choose
an index i (2 ≤ i ≤ n−1) such that the element at position i is greater than both its
neighbors. When this condition is satisfied, you can swap the elements at positions
i and i+1. The task is to determine whether it is possible to sort the permutation
in increasing order after performing a finite number of such operations.

Input:
- t : number of test cases
- For each test case:
    n : size of the permutation, a : permutation of integers from 1 to n

Output:
- Print "YES" if the permutation can be sorted, Print "NO" otherwise

Approach / Notes:
- If the first element of the permutation is 1, print "YES". Otherwise, print "NO".
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

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    if (a[0] == 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}