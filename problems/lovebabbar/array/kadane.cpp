#include <bits/stdc++.h>
using namespace std;
void printAllSubarrays(vector<int> arr, int s,int e){
    // bruteforce method
    for(int i=0 ; i < arr.size(); i++){
        for(int j = i; j < arr.size(); j++){
            
            for(int k = i; k <=j; k++){
                cout<<arr[k]<<" ";
            }
            cout<<"\n";

        }
    }
}
int main(){
    vector<int> arr {-5,4,6,-3,4,-1};
    printAllSubarrays(arr,0,0);
}