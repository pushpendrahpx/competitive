#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a[4]; unordered_map<int,int> mp;
        for(int i=0; i < 4; i++) {cin>>a[i]; mp[a[i]]++; }
        if(mp.size() == 4){
            cout<<2<<"\n";
        }else if(mp.size() ==3){
            cout<<2<<"\n";
        }else if(mp.size() == 2){
            sort(a,a+4);
            if(mp[a[0]] == 2){
                cout<<2<<"\n";
            }else{
                cout<<1<<"\n";
            }
        }else if(mp.size() == 1){
            cout<<0<<"\n";
        }
        
    }
}