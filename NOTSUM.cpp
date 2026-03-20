#include <bits/stdc++.h>
using namespace std;

int main() {
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        
        vector<pair<long long , int >>v(n);
        set<long long> s;
        
        for (int i = 0; i < n; i++) {
            cin>>v[i].first;
            v[i].second = i + 1;
            s.insert(v[i].first);
        }
        
        if(s.size() == 1 && *s.begin() == 0){
            cout<< -1 <<"\n";
        } 
        
        else{
            sort(v.begin(),v.end());
            
            long long a = v[0].first;
            long long b = v[1].first;
            long long c = v[n-1].first;
            
            if(a + b != c){
                cout<<v[0].second<<" "<<v[1].second<<" "<<v[n-1].second<<"\n";
            }
            
            else{
                cout<<v[1].second<<" "<<v[n-1].second<<" "<<v[0].second<<"\n";
            }
        }
    }
    return 0;
}