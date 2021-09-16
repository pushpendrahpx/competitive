#include <bits/stdc++.h>
using namespace std;
bool checkAnagram(string s,string p){
    map<char,int> m1,m2;
    for(int i=0; i < s.length(); i++) m1[s[i]]++;
    for(int j=0; j < p.length(); j++) m2[p[j]]++;

    for(auto it1 = m1.begin(), it2 = m2.begin(); it1 != m1.end() && it2 != m2.end(); it1++,it2++){
        // cout<<it1->first<<" - "<<it1->second<<", "<<it2->first<<"-"<<it2->second<<"\n";
        if(it1->first != it2->first || it1->second != it2->second){
            return false;
        }
    }
    return true;
}
int main(){
    string s("abcdefghiacbdjk");
    string pat("dabc");
    int k = 4;
    int i = 0, j = k-1;
    int counts = 0;

    while(j < s.length()){
        if(checkAnagram(s.substr(i,k),pat) == true){
            cout<<s.substr(i,k)<<" # "<<pat<<"\n";
            counts++;
        }
        i++;
        j++;
    }
    cout<<counts;
}