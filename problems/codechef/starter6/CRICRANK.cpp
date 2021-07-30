#include <bits/stdc++.h>
typedef unsigned long long ulld;
typedef long long lld;
typedef unsigned long uld;
typedef long ld;

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int r1,w1,c1,r2,w2,c2;
        cin>>r1>>w1>>c1>>r2>>w2>>c2;
        int score1 = 0,score2 = 0;
        if(r1>r2){
            score1++;
        }else{
            score2++;
        }
        if(w1>w2){
            score1++;
        }else{
            score2++;
        }
        if(c1>c2){
            score1++;
        }else{
            score2++;
        }
        if(score1 < score2)
            cout<<"B"<<"\n";
        else
            cout<<"A"<<"\n";
    }
}