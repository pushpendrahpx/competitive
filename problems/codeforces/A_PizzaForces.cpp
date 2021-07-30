#include <bits/stdc++.h>
typedef unsigned long long ulld;
using namespace std;
int main(){
    ulld n;
    cin>>n;
    while(n--){
        ulld num;
        cin>>num;
            
        if(num <= 6){
            cout<<15<<"\n";
            continue;
        }else{
            if(num%2 != 0) num++;
            cout<<(num*5)/2<<"\n";
        }
    }
}