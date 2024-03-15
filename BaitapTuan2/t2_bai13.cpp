#include <bits/stdc++.h>
using namespace std;
void isPrime (int n) {
    for (int i = 2; i <= n; i++) {
        if (i == 2 || i == 3) {
            cout << i << " ";
            continue;
        }
        for (int j = 2; j <= sqrt(i); j++) {
            if (i % j == 0) break;
            else {
                if (j == int(sqrt(i))) cout << i << " ";
            }
        }
    }
    cout << endl;
}
void isPerfect (int n) {
    for (int i = 2; i <= n; i++) {
        long count = 0;
        for (int j = 1; j <= (i/2); j++) {
            if (i % j == 0) count += j;
        }
        if (count == i) cout << i << " ";
    }
    cout << endl;
}
void isCp (int n) {
    for (int i = 2; i <= n; i++) {
        double k = sqrt(i);
        if (k == int(k)) cout << i << " ";
    }
}
int main() {
    int n;
    cin >> n;
    isPrime (n);
    isPerfect (n);
    isCp (n);
    return 0;
}








