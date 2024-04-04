#include <bits/stdc++.h>

using namespace std;

void print (int x) {
    if (x > 0 && x < 10) cout <<  " " << x << " ";
    else cout << x << " ";
}

void solution (vector<vector<int>> sol, int n) {
    for (int i = 0; i < n; i++) {
        sol[i].resize(i + 1);
        sol[i][0] = 1;
        sol[i][i] = 1;
        if (i >= 2) {
            for (int j = 1; j < i; j++) {
                sol[i][j] = sol[i - 1][j - 1] + sol[i - 1][j];
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j : sol[i]) print(j);
        cout << endl;
    }

}

int main() {
    int n; cin >> n;
    vector<vector<int>> sol(n);

    solution(sol, n);

    return 0;

}
