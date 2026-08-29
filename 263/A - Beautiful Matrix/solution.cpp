#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5];
    int m,n,move;
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0 ; i < 5 ; i++){
        for(int j = 0 ; j < 5 ; j++){
            if(arr[i][j] == 1){
                m = i;
                n = j;
                break;
            }
        }
    }
    if(m <= 2 && n <= 2){
        move = (2 - m) + (2 - n);
    }else if(m < 2 && n > 2){
        move = (2- m) + (n - 2);
    }else if (m > 2 && n < 2){
        move = (m - 2) + (2 - n);
    }else{
        move = (m-2)+ (n- 2);
    }
    cout << move;
}