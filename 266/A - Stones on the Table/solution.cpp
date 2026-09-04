#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int i = 0,j = 1,count = 0;
    while(j < n){
        if(s[i] == s[j]){
            count++;
        }else{
            i = j;
        }
        j++;
    }
    cout << count;
}