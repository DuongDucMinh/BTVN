#include <bits/stdc++.h>
using namespace std;
bool isPrime (int n) {
    bool res = true;
    if (n == 1) res = false;
    if (n > 1) {
        if (n == 2 || n == 3) res = true;
        else {
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) {
                    res = false;
                    break;
                }
            }
        }
    }
    return res;
}
int main() {
    int n; cin >> n;
    if (isPrime (n)) cout << "yes" << endl;
    else cout << "no" << endl;

    for (int i = 2; i < n; i++) {
        if (isPrime(i)) cout << i << " ";
    }
    return 0;
}

