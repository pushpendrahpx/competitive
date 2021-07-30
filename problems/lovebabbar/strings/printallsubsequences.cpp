#include <bits/stdc++.h>
using namespace std;
int counts =0;
void printallsubsequences(string input,string output){
    
    if(input.empty()){
        return;
    }
    printallsubsequences(input.substr(1),output+input[0]);
    printallsubsequences(input.substr(1),output);
    
  
}
string subsequence(string s, int bin,int len){
    string sub("");
    for(int i=0;i<len; i++){
        if(bin && (1 << i )){
            sub += s[i];
        }

    }
    return sub;
}
int main(){
    string s("abcd");
    // string output("");
    // printallsubsequences(s,output);
    cout<< subsequence(s,2,4);
}