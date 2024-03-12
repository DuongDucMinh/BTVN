#include <bits/stdc++.h>
using namespace std;
bool Prime (int n) {
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
    if (Prime (n)) cout << "yes";
    else cout << "no";
    return 0;
}
