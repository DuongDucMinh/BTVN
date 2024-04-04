#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, MAX, MIN, countL = 0, sumC = 0;
    cin >> N;
    int arr[N];
    for (auto& x : arr) cin >> x;
    MAX = arr[0];
    MIN = arr[0];

    for (int i = 0; i < N; i++) {
        if (arr[i] >= MAX) MAX = arr[i];

        if (arr[i] <= MIN) MIN = arr[i];

        if (arr[i] % 2 == 0) sumC += arr[i];
        else countL++;
    }

    cout << MIN << endl << MAX << endl
         << sumC << endl << countL;

    return 0;

}
