#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k,sum=0;
	    cin>>n>>k;
	    
	    vector<int>v(n);
	    for( int i=0; i<n ;i++){
	        cin>>v[i];
	    }
	    
	    sort(v.begin(),v.end(),greater<int>());
	    
	    for( int i=0; i<k ;i++){
	        v[i] = v[i]-5;
	    }
	    
	    for( int i=k ;i< n; i++){
	        v[i]= v[i]-10;
	    }
	    
	    for( int i=0; i<n ;i++){
	        if(v[i]>0) sum+=v[i];
	    }
	    
	    cout<<sum<<endl;
	    
	}
return 0;
}
