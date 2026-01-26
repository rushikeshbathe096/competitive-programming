/*
Problem: Cover in Water

Description:
Filip has a row of cells where '.' represents empty cells and '#' represents blocked cells. He wants to fill all empty cells with water. He can place water in any empty cell or move water from one cell to another empty cell. If an empty cell has water in both adjacent cells, it gets filled automatically. Find the minimum number of times he needs to place water manually.

Input:
- t test cases
- For each test case: n and string s of length n

Output:
- Minimum number of action 1 (placing water) needed

Approach:
If there exists any segment of three or more consecutive '.', placing water in two cells is enough because the middle cell fills automatically and water can be moved to other cells, so answer is 2. Otherwise, no automatic filling is possible and each '.' must be filled manually, so the answer is the total number of dots.
*/
#include <bits/stdc++.h>
using namespace std;
 
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0,cnt1=0;
    for(int i=0;i<n;i++){
        if(s[i]=='.'){
            cnt++,cnt1++;
            if(cnt1>=3){
                cout<<2<<endl;
                return;
            }
        }
        else{
            cnt1=0;
        }
        
    }
    cout<<cnt<<endl;
}
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    solve();
	}
    return 0;
}