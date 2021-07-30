#include <bits/stdc++.h>
typedef unsigned long long ulld;
typedef long long lld;
typedef unsigned long uld;
typedef long ld;

using namespace std;
int main(){
    ulld t;
    cin>>t;

    while(t--){
        lld n;
        cin>>n;
        lld num = n/3;
        lld x = num,y = num;
        int dig = n%3;
        if(dig == 2){
            y++;
        }
        if(dig == 1){
            x++;
        }

        cout<<x<<" "<<y<<"\n";
    }

}