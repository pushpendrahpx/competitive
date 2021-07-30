
/*

bitwise operators

bitwise and (&)
bitwise or (|)
bitwise not (~)
bitwise XOR (^)

left shift, <<
right shift, >>



*/

#include <bits/stdc++.h>
using namespace std;
void solve(string ip,string op){

    if(ip.length() == 0){
        cout<<op<<"\n";
    }else{
        solve(ip.substr(1),op + ip[0]);
        solve(ip.substr(1),op);
    }
    
    
}
int main(){
    // uses 3 for loops
    string a = "aacd"; 
    for(int i=0; i < a.length(); i++){
        for(int j = i; j < a.length(); j++){
            
            for(int k = i; k <= j; k++){
                cout<<a[k]<<" ";
            }
            cout<<"\n";

        }
    }

    cout<<(3 << 2);
    //
    // solve(a,""); // 010 //011
}