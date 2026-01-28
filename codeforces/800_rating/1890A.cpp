/*
Problem: Doremy Paint

Description:
An array is called good if all sums of two adjacent elements are equal. You can permute the elements of the array in any order. Determine whether it is possible to make the array good.

Input Format:
- The first line contains an integer t (1 ≤ t ≤ 100) — the number of test cases.
- For each test case:
    - The first line contains an integer n (2 ≤ n ≤ 100) — the length of the array.
    - The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 10^5) — the elements of the array.

Output Format:
- For each test case, print "Yes" if it is possible to make the array good,  and "No" otherwise. Output can be in any case.

Approach:
Odd positions should have the same numbers, and even positions should have the same numbers. Therefore, there can be at most 2 distinct integers. If there is only 1 distinct number, the answer is always "Yes". If there are 2 distinct numbers, check their counts: the difference should be ≤ 1 (0 if n is even, 1 if n is odd). Otherwise, the answer is "No".
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
    for(int i = 0; i < n; i++) cin >> a[i];

    ump freq;
    for(int i : a) freq[i]++;

    if(freq.size() >= 3) {
        cout << "No" << endl;
        return;
    }

    if(freq.size() == 1) {
        cout << "Yes" << endl;
        return;
    }

    auto it = freq.begin();
    int f1 = it->second;
    it++;
    int f2 = it->second;

    if(abs(f1 - f2) <= 1)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}


int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}