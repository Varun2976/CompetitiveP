#include <bits/stdc++.h>
using namespace std;

void LCS(string a , string b){
    int n = a.size();
    int m = b.size();

    vector<vector<int>>V(n+1 ,vector<int>(m+1 , 0));

    for(int i = 1 ; i <= n;i++){
        for(int j = 1 ; j <=  m ;j++){
            if(a[i-1] ==b[j-1]){
                V[i][j] = 1 + V[i-1][j-1];
            }
            else{
                V[i][j] = max(V[i-1][j] , V[i][j-1]);

            }
            
        }
    }
    cout <<"Maximum LCS length : "<<V[n][m] << endl;
}
int main(){
    string a , b;
    cin >> a >> b;

    LCS(a,b);
    return 0;
}