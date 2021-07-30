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
        unordered_set<char> red,green;
        string s;
        cin>>s;
        int n= s.length();
        unordered_map<char,int> M;
        int res= 0;
        

        for(int i=0; i < n; i++){
            if(M.find(s[i]) == M.end()){
                M.insert(make_pair(s[i],1));
                res++;
            }else{
                if(M[s[i]] == 1){
                    res++;
                    M[s[i]]++;
                }
            }
        }

        cout<<res/2<<"\n";
    }
}