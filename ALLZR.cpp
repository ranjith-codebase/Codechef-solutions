#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b,c;
	    cin>>a>>b>>c;
	    
	    if(b == 2*a + (c/3) && c%3 == 0){
	        cout<<"Yes\n";
	    }
	    else {
	         cout<<"No\n";
	    }
	    
	}
return 0;
}
