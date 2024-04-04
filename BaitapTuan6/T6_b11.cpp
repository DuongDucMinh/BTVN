#include <bits/stdc++.h>
using namespace std;
int main() {
    long long int n;
    vector <int> bi;
    cin >> n;
    long long int k = abs(n);
    while (k != 0) {
        bi.push_back(k % 2);
        k /= 2;
    }
    for (int i = bi.size() - 1; i >= 0; i--) {
        cout << bi[i];
    }
    return 0;
}
