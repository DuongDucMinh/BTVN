#include <bits/stdc++.h>

using namespace std;

void print (long x) {
    if (x > 0 && x < 10) cout << " " << x <<  " ";
    else cout << x << " ";
}

void hehe (vector<vector<long>>& matrix, long i , long j , long Count, long N) {
    if (Count == N * N) return;
    if (i == 0 || i == (N - 1) || j == (N - 1)) {
        if (i == 0 && j == (N - 1)) {
            if (matrix[N - 1][0] == 0) {
                matrix[N - 1][0] = Count + 1;
                return hehe (matrix, N - 1, 0, Count + 1, N);
            } else {
                matrix[1][j] = Count + 1;
                return hehe (matrix, 1, j, Count + 1, N);
            }
        } else {
            if (i == 0) {
                if (matrix[N - 1][j + 1] == 0) {
                    matrix[N - 1][j + 1] = Count + 1;
                    return hehe (matrix, N - 1, j + 1, Count + 1, N);
                } else {
                    matrix[1][j] = Count + 1;
                    return hehe (matrix, 1, j, Count + 1, N);
                }
            } else {
                if (j == (N - 1) && i == (N - 1)) {
                    if (matrix[i - 1][0] == 0) {
                        matrix[i - 1][0] = Count + 1;
                        return hehe (matrix, i - 1, 0, Count + 1, N);
                    } else {
                        matrix[0][j] = Count + 1;
                        return hehe (matrix, 0, j, Count + 1, N);
                    }
                } else {
                    if (j == (N - 1)) {
                        if (matrix[i - 1][0] == 0) {
                            matrix[i - 1][0] = Count + 1;
                            return hehe (matrix, i - 1, 0, Count + 1, N);
                        } else {
                            matrix[i + 1][j] = Count + 1;
                            return hehe (matrix, i + 1, j, Count + 1, N);
                        }
                    } else {
                        if (matrix[i - 1][j + 1] == 0) {
                            matrix[i - 1][j + 1] = Count + 1;
                            return hehe (matrix, i - 1, j + 1, Count + 1, N);
                        } else {
                            matrix[0][j] = Count + 1;
                            return hehe (matrix, 0, j, Count + 1, N);
                        }
                    }
                }
            }
        }
    } else {
        if (matrix[i - 1][j + 1] == 0) {
            matrix[i - 1][j + 1] = Count + 1;
            return hehe (matrix, i - 1, j + 1, Count + 1, N);
        } else {
            matrix[i + 1][j] = Count + 1;
            return hehe (matrix, i + 1, j, Count + 1, N);
        }
    }
}

int main() {
    long N, Count = 0; cin >> N;
    if (N % 2 != 0) {
        vector<vector<long>> matrix(N, vector<long> (N,0));
        matrix[0][int(N / 2)] = 1;
        hehe (matrix, 0, int(N / 2), 1, N);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                print (matrix[i][j]);
            }
            cout << endl;
        }
    }
    else cout << N << " khong phai la so le!" << endl;
    return 0;
}

