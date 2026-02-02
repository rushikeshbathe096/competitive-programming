/*
Problem: One and Twos

Description:
You are given an array a of length n consisting only of 1s and 2s.Find the smallest index k (1 ≤ k ≤ n−1) such that the product of the first k elements equals the product of the remaining elements.If no such k exists, print −1.

Input:
t test cases.For each test case:- Integer n: length of the array,followed by n integers a1, a2, ..., an (each is 1 or 2)

Output:
For each test case:- The smallest valid k, or −1 if it does not exist.

Approach:
Ans only depend on nos of 2s so we find total no of 2s,if it is odd we return -1 else we divide total into half and find the index where no of  prefex2 is equal tototal no of 2. If there are no 2s we return 1 as product of 1s is always 1.
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
    int total=0;
    int pre=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==2)total++;
    }
    if(total&1){
        cout<<-1<<endl;
        return;
    }
    total/=2;
    if (total == 0) {
    cout << 1 << endl;
    return;
    }

    for(int i=0;i<n;i++){
        if(a[i]==2){
            pre++;
            if(pre==total){
                cout<<i+1<<endl;
                return;
            }
        }
    }
}

int32_t main() {
    fastio;

    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}