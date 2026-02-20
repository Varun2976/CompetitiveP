#include <bits/stdc++.h>



int main (){
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i = 0 ; i < N ;i++){
        cin >> A[i];
    }
    vector<int>dp(amount + 1 ; ie9);

    for(int coin : A){
        for(int i = 0 ; i <= amount ; i++){
            dp[i] += dp[i - coin];
        }
    }

    if(dp[amount] == 1e9){
        return -1;
    }
    else{
        cout << dp[amount] << endl;
    }
}