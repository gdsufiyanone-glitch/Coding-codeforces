#include <iostream>
using namespace std;
int main(){
    string s;
    cin >> s;
    int low =0, upper = 0;
    for(int i = 0;i < s.size();i++){
        if(s[i] >= 65 && s[i] <= 90){
            upper++;
        }else{
            low++;
        }
    }
    string s1 = "";
    if(low >= upper){
        for(int i = 0 ; i < s.size(); i++){
            s1 += tolower(s[i]);
        }
    }else{
        for(int i = 0; i < s.size();i++){
            s1 += toupper(s[i]);
        }
    }
    cout << s1;
}