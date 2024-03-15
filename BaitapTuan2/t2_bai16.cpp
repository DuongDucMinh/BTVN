#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    map<int, string> lib=
    {
        {0, "khong"}, {1, "mot"}, {2, "hai"}, {3, "ba"}, {4, "bon"},
        {5, "nam"}, {6, "sau"}, {7, "bay"}, {8, "tam"}, {9, "chin"}
    };
    do {
        cout << "Nhap vao mot so trong khoang 0..9: " ;
        cin >> n;
        if (n < 0 || n > 9) break;
        if (n >= 0 && n <= 9) cout << "Vua nhap chu so " << lib[n] << endl;
    } while (1);
    return 0;
}











