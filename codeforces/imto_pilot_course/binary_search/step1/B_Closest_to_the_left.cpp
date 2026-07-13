#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<k;i++){
        int x;
        cin>>x;
        int l=0,r=n-1;
        int ans=0;
        while(l<=r){
            int m=l+(r-l)/2;
            if(a[m]<=x){
                //using 1 based indexing
                ans=m+1;
                l=m+1;
            }
            else{
                r=m-1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}