#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin >> s1;
    char s2 =  s1[0];
    
    if(s2 >= 97 ){
        s2 = s2-32;
    }
    string s3 = string(1,s2);
    for(int i = 1;i < s1.length();i++){
        s3 += s1[i];
    }
    cout << s3;
 
}