#include <bits/stdc++.h>
using namespace std;
/*
-------------------------- MINIMIZING SUM ------------------------------
    - Basically you have to choose a number that will minimize the sum
    - for c = 1 --> go for median 
    - for c =2 --> go for mean
    - c = any other number --> go for TERNARY SEARCH
*/

void minimize_sum(vector<int>& arr , int c){
    if(c == 1){
        sort(arr.begin() , arr.end());
        if(arr.size() % 2 != 0){
            cout << arr[arr.size()/ 2] << endl;
            return;
        }
        else{
            cout << arr[arr.size()/ 2] << endl;
            return;
        }

    }
    else if(c == 2){
        int mean = accumulate(arr.begin() , arr.end() , 0.0L)/arr.size();

        cout << mean << endl;
        return;
    }
}

int main(){
    vector<int> arr = {1,4,7,3,5};
    int c;
    cout << "Enter the number you wanna minimize by (c) : ";
    cin >> c;

    minimize_sum(arr,c);
    return 0;
}