#include <bits/stdc++.h>
typedef unsigned long long ulld;
typedef long long lld;
typedef unsigned long uld;
typedef long ld;
// c => 1
// o => 1
// d => 1
// e => 1
//f = 1
//p
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        
        ld n,k;
        cin>>n>>k;
        ld arr[n];
        for(ld i=0; i < n; i++)
            cin>>arr[i];
        ld painted = 0;
        int res[n];
        memset(res,0,sizeof(res));


        unordered_map<ld,ld> mp;
        for(int i=0; i < n; i++){
            if(mp.find(arr[i]) == mp.end()){
                painted++;
                res[i] = painted%k;
                mp.insert(make_pair(arr[i],1));
            }else{
                if(mp[arr[i]] < k){
                    painted++;
                    res[i] = painted%k;
                    mp[arr[i]]++;
                }else{
                    
                    res[i] = 0;
                }
            }
        }
        for(int i=0; i < n; i++){
            cout<<res[i]<<" ";
        }
        cout<<"\n";
    }
}