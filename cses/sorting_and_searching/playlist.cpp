/*
Problem:
Given a playlist of n songs represented by their IDs, find the length of the longest contiguous sequence of songs in which every song is unique.

Example:
Input:
8
1 2 1 3 2 7 4 2

Output:
5

Approach:
Use the sliding window technique with a set to maintain the current window of unique songs. Expand the right pointer one song at a time. If a duplicate song is encountered, repeatedly remove songs from the left side of the window until the duplicate is eliminated. After each expansion, update the maximum window length.

Time Complexity: O(n)
Each song is inserted into and removed from the set at most once, so the total number of operations is linear.

Space Complexity: O(n)
A set is used to store the unique song IDs currently present in the sliding window.

Edge Cases:
- n = 1.
- All songs are unique.
- All songs are identical.
- Duplicate songs appear at the beginning, middle, or end of the playlist.
*/
```
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    int l=0,r=0;
    set<int>st;
    int cnt=0;
    for(r;r<n;r++){
        while(st.find(a[r])!=st.end()){
            st.erase(a[l]);
            l++;
        }
        st.insert(a[r]);
        cnt=max(cnt,r-l+1);
    }
    cout<<cnt<<endl;
}
 
int main() {
	solve();
 
}
