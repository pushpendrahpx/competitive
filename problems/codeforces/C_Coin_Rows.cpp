#include <bits/stdc++.h>
typedef unsigned long long int ulld;
using namespace std;
int main(){
    ulld t;
    cin>>t;
    while(t--){
        ulld m;
        cin>>m;
        int arr[2][m];
        for(int i=0; i < 2; i++){
            for(int j =0; j < m; j++){
                cin>>arr[i][j];
            }
        }

        ulld btsum = 0;
        for(int i = 0; i < m-1; i++){
            btsum += arr[1][i];
        }
        ulld atsum = 0;
        for(int i= 0; i < m; i++){
            atsum += arr[0][i];
        }
        atsum += arr[1][m-1];

        cout<<btsum<<"\n";




    }
}