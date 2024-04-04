#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; cin >> N;
    int a[N], b[10] = {0};

    for (auto& x : a) {
        cin >> x;
        b[x]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << "so luong so " << i << " : " << b[i] << endl;
    }

    return 0;

}
