#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int x,y,z,cnt=0;
	    cin>>x>>y>>z;
	    
	    if(x>=50) cnt++;
	    if (y>=50) cnt++;
	     if (z>=50) cnt++;
	    
	    if(cnt>=2) cout<<"Yes"<<endl;
	    else cout<<"No"<<endl;
	    
	}
return 0;
}
