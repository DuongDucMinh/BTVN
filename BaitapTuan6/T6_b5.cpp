#include <bits/stdc++.h>
using namespace std;
long ucln (long a, long b) {
    if (a >= b) {
        if (b == 0) return a;
        return ucln(b, a%b);
    } else return ucln(b, a);
}
int main() {
    long long a, b;
    cin >> a >> b;
    cout << ucln(a, b) << endl;
    return 0;
}
