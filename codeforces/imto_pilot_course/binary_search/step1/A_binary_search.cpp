#include <bits/stdc++.h>
using namespace std;

int main() {
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
	    int ans=INT_MIN;
	    while(l<=r){
	        int m=l+(r-l)/2;
	        if(a[m]==x){
	            ans=m;
	            break;
	        }
	        else if(a[m]<x)l=m+1;
	        else r=m-1;
	        
	    }
	    if(ans!=INT_MIN)cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	    
	}

}
