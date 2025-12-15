#include <bits/stdc++.h>
using namespace std;


void BinarySearch(vector<int>& a , int target){
    int st =0 , end = a.size() - 1;
    sort(a.begin() , a.end());
    while( st <= end){
        int mid = st + (end-1)/2;

        if(a[mid] == target){
            cout << "Index: " << mid<<endl;
            return;
        }
        else if(a[mid] < target){
            st = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    
}


int main(){
    vector<int> a = {1,5,3,6,2};
    int target;
    cin >> target;

    BinarySearch(a,target);

    return 0;
}