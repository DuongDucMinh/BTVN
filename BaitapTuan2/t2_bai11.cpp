#include <bits/stdc++.h>
using namespace std;
int main() {
    double MIN, MAX, step;
    cin >> MIN >> MAX >> step;
    cout << fixed << setprecision(2);
    for (auto i = MIN; i <= MAX; i+=step) {
        double k = ((i - 32) * 5) / 9;
        cout << i << " " << k << " " << k + 273.15 << endl;
    }
    return 0;
}
