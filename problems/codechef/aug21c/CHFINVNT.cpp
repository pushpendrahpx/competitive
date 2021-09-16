#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,p,k; cin>>n>>p>>k;
        int c = 0;
        int e = p - ((int)(p/k))*k;
        // cout<<"E="<<e<<"b";
        c += ((int)(n/k))*e + (n%k);
        c += (p-e)/k;
        cout<<(c+1)<<"\n";
    }
}