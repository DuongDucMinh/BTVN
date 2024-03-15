#include <bits/stdc++.h>
using namespace std;
int main() {
    double x;
    cin >> x;
    double k = ((x - 32) * 5) / 9;
    cout << x << fixed << setprecision(2)
         << " " << k << " " << k + 273.15;
    return 0;
}
