#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,m,a,b,c,ans = 0;
	    cin>>n>>m>>a>>b>>c;
	    
	    int k = min(m,n);
	    
	    if(k == n){
	        ans = n*c;
	        ans += (m-n)*b;
	    }
	    
	    else{
	        ans = m*c;
	        ans += (n-m)*a;
	    }
	    
	    cout<<ans<<endl;
	    
	}
return 0;
}
