#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    vector <string> vec;
    for(int i = 1; i <= n ; i++){
        string s1 = "";
        string s2;
        cin >> s2;
        int size = s2.size();
        if(size > 10){
        s1 += s2[0];
        string s3 = to_string(size - 2);
        s1 += s3;
        s1 += s2[size - 1];
        vec.emplace_back(s1);
        }else{
         vec.emplace_back(s2);
 
        }
       
 
    }
     for(auto i:vec){
            cout << i << endl;
        }
}