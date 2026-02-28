#include <bits/stdc++.h>
using namespace std;

void LIS(vector<int>& v, int n) {

    vector<int> length(n);

    for (int k = 0; k < n; k++) {
        length[k] = 1;

        for (int i = 0; i < k; i++) {
            if (v[i] < v[k]) {
                length[k] = max(length[k], length[i] + 1);
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(ans, length[i]);
    }

    cout << ans << endl;
}

int main() {
    int n;
    cin >> n;

    vector<int> V(n);

    for (int i = 0; i < n; i++) {
        cin >> V[i];
    }

    LIS(V, n);

    return 0;
}