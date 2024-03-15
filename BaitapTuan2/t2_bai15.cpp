#include <bits/stdc++.h>
using namespace std;
int fibo (int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    else return fibo(n - 1) + fibo(n - 2);
}
int main() {
    int N, i = 1; cin >> N;
    while (fibo(i) < N) {
        i++;
    }
    if (fibo(i) == N) {
        cout << "Thuoc day Fibonacci" << endl;
        if (i == 1) cout << 1 << " " << 1;
        else for (int j = 1; j <= i; j++) cout << fibo(j) << " ";
    } else {
        cout << "Khong thuoc day Fibonacci" << endl;
        for (int j = 1; j < i; j++) cout << fibo(j) << " ";
    }
    return 0;
}
