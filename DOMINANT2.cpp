#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    map<int,int>mpp;
	    
	    vector<int>v(n);
	    for(int i=0; i<n;i++){
	        cin>>v[i];
	        mpp[v[i]]++;
	    }
	    
	    vector<int>js;
	    
	    for(auto it : mpp){
	        js.push_back(it.second);
	    }
	    
	    sort(js.begin(),js.end());
	    
	    int nx = js.back();
	    
	    if(js.size() == 1 || js.back() != js[js.size() - 2]) cout<<"YES"<<endl;
	    else cout<<"NO"<<endl;
	    
	    
	}
return 0;
}
