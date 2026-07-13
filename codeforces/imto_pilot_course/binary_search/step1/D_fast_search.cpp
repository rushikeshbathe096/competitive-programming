#include<bits/stdc++.h>
using namespace std;

int lastindex(vector<int>&a,int x){
    int l=0,r=a.size()-1;
    int ans=0;
    while(l<=r){
        int m=l+(r-l)/2;
        if(a[m]<=x){
            ans=m+1;
            l=m+1;
        }
        else r=m-1;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int k;
    cin>>k;
    for(int i=0;i<k;i++){
        int l,r;
        cin>>l>>r;
        //find the no of elements lesss thatn equal to r and subtract the no of elements less than l
        int ans=lastindex(a,r)-lastindex(a,l-1);
        cout<<ans<<" ";
    }
    return 0;
}