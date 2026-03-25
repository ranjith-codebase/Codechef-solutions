#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    vector<int>v(n);
	    for( int i=0; i<n; i++){
	        cin>>v[i];
	    }
	    
	    int maxi = *max_element(v.begin(), v.end());
	    
	    bool flag = true;
	    
	    sort(v.begin(),v.end());
	    
	    for( int i=0; i<n-1 ;i++){
	        if(v[i] == v[i+1]){
	            if(v[i]<maxi){
	                flag = false;
	                break;
	            }
	        }
	    }
	    
	    if(!flag) cout<<"No"<<endl;
	    else cout<<"Yes"<<endl;
	    
	}
return 0;
}
