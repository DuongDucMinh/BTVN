#include <bits/stdc++.h>

using namespace std;

void print (vector<vector<char>>& matrix, int _m, int _n) {
    for (int i = 1; i <= _m; i++) {
        for (int j = 1; j <= _n; j++) {
            if (matrix[i][j] != '*') {
                int Count = 0;
                for (int _i = (i - 1); _i <= (i + 1); _i++) {
                    for (int _j = (j - 1); _j <= (j + 1); _j++) {
                        if (_i == i && _j == j) continue;
                        if (matrix[_i][_j] == '*') Count++;
                    }
                }
                matrix[i][j] = Count + 48;
            }
        }
    }

    // in ma tran
    for (int i = 1; i <= _m; i++) {
        for (int j = 1; j <= _n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<char>> matrix(m + 2, vector<char>(n + 2));
    for (int i = 0; i < (m + 2); i++) {
        for (int j = 0; j < (n + 2); j++) {
            if (i == 0 || i == (m + 1) || j == 0 || j == (n + 1)) matrix[i][j] = 0;
            else cin >> matrix[i][j];
        }
    }

    print(matrix, m, n);

    return 0;
}

