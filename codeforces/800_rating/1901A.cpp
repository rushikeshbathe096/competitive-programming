/*
Problem: Line Trip

Description:
You start at point 0, want to go to point x and return back to 0. The car consumes 1 unit fuel per 1 unit distance. There are n gas stations at positions a[i] where the car fully refuels. There are no gas stations at 0 and x. Find the minimum fuel tank capacity required to complete the trip.

Input:
- t test cases
- For each test case: n, x and array a

Output:
- Minimum fuel tank capacity needed

Approach:
Maintain a variable for the maximum required distance. Compare distance from 0 to first station, distances between consecutive stations, and twice the distance from the last station to x. The maximum of these values is the answer.
*/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,x;
	    cin>>n>>x;
	    vector<int>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    int gap=v[0];
	    for(int i=1;i<n;i++){
	        gap=max(gap,v[i]-v[i-1]);
	    }
	    gap=max(gap,2*(x-v[n-1]));
	    cout<<gap<<endl;
	}
 
}
