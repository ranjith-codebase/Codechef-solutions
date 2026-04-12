#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    
	    vector<long long >v(n);
	    for(int i=0; i<n ;i++){
	        cin>>v[i];
	    }
	    
	    sort(v.begin(),v.end());
	    
	    int med = (n-k+1)/2;
	    
	    set<int>s;
	    
	    for( int i=med-1; i<=med+k-1; i++){
	        s.insert(v[i]);
	    }
	    
	    for(auto it :s){
	        cout<<it<<" ";
	    }
	    
	    cout<<endl;
	    
	}
return 0;
}
