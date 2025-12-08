#include <bits/stdc++.h>
using namespace std;
// ----------- MAXIMUM SUBARRAY SUM ------------
// Best method is to use kadane's algo
int main(){
    int arr[] = {-1,0,2,-2,6};
    int best = arr[0];
    int current = 0;

    for(int x : arr){
        current = max(x,current + x);
        best = max(best , current);
    }
    cout << best << endl;
    
    return 0;
}