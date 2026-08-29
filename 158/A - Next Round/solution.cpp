#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k,count = 0;
    cin >> n >> k;
    vector <int> vec;
    for(int i = 1; i <= n ; i++){
        int score;
        cin >> score;
        vec.emplace_back(score);
    }
    for(int i = 0; i < n ; i++){
        if(vec[i] > 0 && vec[i] >= vec[k-1]){
            count++;
        }
    }
    cout << count;
}