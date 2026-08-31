#include <bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    cin >> s1;
    vector<string> arr;
    for(int i = 0 ; i < s1.length(); i+=2){
        arr.emplace_back(1,s1[i]);
}
    sort(arr.begin(),arr.end());
    string s2 = arr[0];
    for(int i = 1; i < arr.size();i++){
        s2 = s2 +"+" + arr[i];
    }
    cout << s2 ;
}