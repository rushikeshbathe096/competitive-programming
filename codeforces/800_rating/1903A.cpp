/*
Problem: Halloumi Boxes

- You have n boxes with numbers a1, a2, ..., an.
- You can reverse any subarray of length <= k.
- Determine if it is possible to sort the array in non-decreasing order
  using any number of such reverses.

Input:
- t : number of test cases
- For each test case:
    n k : number of boxes and max reverse length
    a1 a2 ... an : numbers on boxes

Output:
- "YES" if array can be sorted, "NO" otherwise

Approach:
- If k > 1, we can swap adjacent boxes and always sort the array.
- If k == 1, we can only sort the array if it is already sorted.
*/

#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        if(k>1){
            cout<<"YES"<<endl;
        }
        else{
            bool sorted=true;
            for(int i=1;i<n;i++){
                if(v[i]<v[i-1]){
                    sorted=false;
                    break;
                }
            }
            if(sorted){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}