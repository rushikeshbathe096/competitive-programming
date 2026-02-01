/*
Problem: Make it Beautiful

Description:
An array a is called ugly if it contains at least one element which is equal to the sum of all elements before it. If the array is not ugly, it is beautiful.You are given a sorted array a (1≤a1≤a2≤…≤an≤100). Reorder the elements of a in such a way that the resulting array is beautiful. You can only change the order of elements; no insertion or deletion is allowed.

Input:
t test cases. For each test case:- Integer n — the length of the array a, n integers a1,a2,…,an

Output:
For each test case:- If it is impossible to reorder a into a beautiful array, print NO. Otherwise, print YES and the resulting array

Approach:
Sort the array, if all elements are equal ans is no else print smallest element at first(since it makes te sum ssmall) and then largest to smallest
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
    cin >> n;
    vi a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    sort(all(a));
    if (a[0] == a[n - 1]) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    cout << a[0] << " ";
    for (int i = n - 1; i >= 1; i--) {
        cout << a[i] << " ";
    }
    cout << "\n";
}



int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}