#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int x = 0;
    for(int i = 1 ; i <= n ; i++){
        string s1;
        cin >> s1;
        if(s1[1] == '+'){
            x++;
        }else{
            x--;
        }
    }
    cout << x;
}