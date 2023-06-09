#include<bits/stdc++.h>

using namespace std;

int main() {
    long long n;
    cin >>n;

    vector<long long > v(n);
    for (int i = 0; i <n; i++) {
        cin >> v[i];
    }

    vector<long long> preSum(n);
    preSum[0] = v[0];
    for (int i = 1; i <n; i++) {
        preSum[i] = preSum[i - 1] + v[i];
    }

    for (int i =n - 1; i >= 0; i--) {
        cout << preSum[i] << " ";
    }

    return 0;
}