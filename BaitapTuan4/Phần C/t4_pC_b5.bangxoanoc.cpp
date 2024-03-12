#include <bits/stdc++.h>

using namespace std;

void dk(int so) {
    if (so > 0 && so < 10) cout << " " << so << " ";
    else cout << so << " ";
}

void print(int x, int y) {
    int matrix[x][y], num = 1;
    int top = 0, bot = x - 1, left = 0, right = y - 1;

    while (top <= bot && left <= right) {
        for (int i = left; i <= right; i++) matrix[top][i] = num++;
        top++;
        // in hang ngang tren cung

        for (int i = top; i <= bot; i++) matrix[i][right] = num++;
        right--;
        // in hang doc ngoai cung ben phai

        if (top <= bot) {
            for (int i = right; i >= left; i--) matrix[bot][i] = num++;
            bot--;
        }
        // in hang ngang duoi cung

        if (left <= right) {
            for (int i = bot; i >= top; i--) matrix[i][left] = num++;
            left++;
        }
        // in hang doc ngoai cung ben trai
    }

    // in ma tran
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            dk(matrix[i][j]);
        }
        cout << endl;
    }
}

int main()
{
    int x, y;
    cin >> x >> y;

    if (x > 0 && y > 0 && x <= 10 && y <= 10) {
        print(x, y);
    }

    return 0;
}
