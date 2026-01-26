/*
Problem: Beautiful Permutation

Description:
A permutation of the integers from 1 to n is called beautiful if no two adjacent
elements differ by exactly 1. Given an integer n, the task is to construct any
such beautiful permutation if it exists. If it is not possible to form a
beautiful permutation, print "NO SOLUTION".

Input:
- n : a single integer representing the size of the permutation

Output:
- Print a beautiful permutation of integers from 1 to n
- If no valid permutation exists, print "NO SOLUTION"

Approach / Notes:
- If n is 2 or 3, no beautiful permutation exists.Otherwise,first print all odd numbers in increasing order, followed by all even numbers in increasing order.
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
	cin >> n;
	if(n==2 || n==3){
		cout<<"NO SOLUTION\n";
	}
	else{
		for(int i=2;i<=n;i+=2){
			cout<<i<<" ";
		}
		for(int i=1;i<=n;i+=2){
			cout<<i<<" ";
		}
	}
	cout<<endl;
}

int32_t main() {
    fastio;

    int t = 1;
    //cin >> t;
    while (t--) solve();

    return 0;
}