#include <bits/stdc++.h>

using namespace std;

long long int solve(vector<vector<int>> steps) {
    int n = steps.size();
    long long int min1 = steps[0][0], min2 = steps[0][1];

    for (int i = 0; i < n; i++) {
        if (steps[i][0] <= min1) min1 = steps[i][0];
        if (steps[i][1] <= min2) min2 = steps[i][1];
    }

    return min1*min2;
}

int main() {
    int N; cin >> N;

    vector<vector<int>> steps(N);

    for (int i = 0; i < N; i++) {
        steps[i].resize(2);
        cin >> steps[i][0] >> steps[i][1];
    }

    long long int result = solve(steps);

    cout << result << "\n";

    return 0;
}











