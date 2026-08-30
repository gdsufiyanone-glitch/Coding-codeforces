#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin >> s1;
    vector<int> vec(26,0);
    int count = 0;
   for(int i = 0 ; i < s1.length();i++){
    int ascii = s1[i];
    vec[ascii - 97] += 1;
   }
   for(int i = 0 ; i < vec.size(); i++){
    if(vec[i] > 0){
        count++;
    }
   }
   if(count % 2 == 0){
    cout << "CHAT WITH HER!";
   }else{
    cout << "IGNORE HIM!";
   }
   
}