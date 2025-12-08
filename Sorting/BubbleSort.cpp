#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,6,5,3,7};
    int n = 5;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n -1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}