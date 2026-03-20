#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    long long  y = INT_MAX; 
	    
	    for(int i=0 ; i<n ;i++){
	        long long a,b;
	        cin>>a>>b;
	        
	        y = min(max(a,y),b);
	    }
	    
	    cout<<y<<"\n";
	    
	}
return 0;
}
