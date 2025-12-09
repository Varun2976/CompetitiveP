#include <bits/stdc++.h>
using namespace std;
/*
-------------------------- COIN PROBLEM ---------------------------
    - Certain number of coins are given and you are to make the 'n' sum of money using those coins
    - It should be efficient

*/

int coin_problem(int amount , vector<int>& coins){
    const int INF = 1e9;
    vector<int> dp(amount + 1 ,INF);

    dp[0] = 0;

    for(int i =0 ; i <= amount; i++){
        for(int coin : coins){
            if(i - coin >= 0){
                dp[i] = min(dp[i] , 1 + dp[i - coin]);
            }
        }
    }
    return dp[amount];
}
int main(){
    vector <int> coins = {1,3,4};
    int amount;
    cout << "Enter the amount you wanna calculate : ";
    cin >> amount ;

    cout << coin_problem(amount , coins) << endl;
    return 0;
}