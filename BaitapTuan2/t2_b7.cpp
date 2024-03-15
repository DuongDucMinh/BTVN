#include <bits/stdc++.h>

using namespace std;

int main() {
    int x, cp = -1;
    while (cin >> x) {
        if (x < 0) {
            cout << x;
            break;
        }
        if (x != cp) cout << x << " ";
        cp = x;
    }
    return 0;
}











