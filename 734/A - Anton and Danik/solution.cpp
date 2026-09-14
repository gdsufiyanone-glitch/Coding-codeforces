#include <iostream>
using namespace std;
int main(){
    int n;
    string s;
    cin >> n >> s;
     int anton = 0;
     for(int i = 0; i < s.size();i++){
        if(s[i] == 'A'){
            anton++;
        }
     }
     if(anton > (n-anton)){
        cout << "Anton";
     }else if((n - anton) > anton){
        cout << "Danik";
     }else{
        cout << "Friendship";
     }
 
}