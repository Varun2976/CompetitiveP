#include <bits/stdc++.h>
using namespace std;
void coin(int amount , vector<int> &coins){
    sort(coins.rbegin() , coins.rend());
    int count = 0;
    for(int c : coins){
        while(amount >= c){
            amount -= c;
            count++;
        }
    }
    cout << count << endl;
    
}
int main(){
    vector<int>coins = {1,3,4};
    int amount = 6;

    coin(amount , coins);

    return 0;
}