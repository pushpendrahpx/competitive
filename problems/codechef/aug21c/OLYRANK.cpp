#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int g1,s1,b1,g2,s2,b2;
        int m1=0,m2=0;
        cin>>g1>>s1>>b1>>g2>>s2>>b2;
        m1 = g1+s1+b1;
        m2 = g2+s2+b2;
        m1 > m2 ? cout<<1<<"\n" : cout<<2<<"\n"; 
    }
}