#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin >> k >> n >> w;
    int borrow =(k*(w*(w+1)/2)) - n;
    if(borrow < 0){
        borrow = 0;
    }
    cout << borrow;
}