#include <bits/stdc++.h>
using namespace std;

struct Job{
    int deadline, profit;
};

bool cmp(Job a, Job b){
    return a.profit > b.profit;
}

int main(){

    vector<Job> jobs = {{2,100},{1,19},{2,27},{1,25},{3,15}};
    int n = jobs.size();

    sort(jobs.begin(), jobs.end(), cmp);

    int maxD = 0;
    for(auto j: jobs)
        maxD = max(maxD, j.deadline);

    vector<bool> slot(maxD+1, false);
    int profit = 0;

    for(int i=0;i<n;i++){
        for(int j=jobs[i].deadline;j>0;j--){
            if(!slot[j]){
                slot[j] = true;
                profit += jobs[i].profit;
                break;
            }
        }
    }

    cout << "Max Profit: " << profit;
}