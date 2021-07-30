#include <bits/stdc++.h>
using namespace std;
int main(){



    // // CHeck Prime O(sqrt(N)) time complexity
    // int num = 30;
    // bool isPrime = true;
    // for(int i= 2; i < sqrt(num); i++){
    //     if(num%i == 0){
    //         isPrime = false;
    //     }
    // }
    // cout<<isPrime; 



    int N = 200;
    // List all prime numbers less than 34
    bool mp[N+2];
    memset(mp,true,sizeof(mp));
    for(int i= 2; i < N+2; i++){

        for(int j = i; j < N+2; j++){
            if((j)%i == 0 && j != i){
                mp[j] = false;
            }
            // cout<<" (i="<<i<<", j="<<j<<") ";
        }

    }



    for(int i= 2; i < N+2; i++){
               cout<<"(" <<i << ") " <<mp[i]<<" \n";
    }
}