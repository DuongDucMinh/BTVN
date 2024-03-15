#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, grade, Count_sub = 0;
    double hs, Sum_grade = 0, Sum_hs = 0;
    set<double> heSo = {1, 1.5, 2, 2.5, 3};
    cout << "Tong so mon hoc can tinh DTB: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Diem mon hoc " << i << ": " ;
        cin >> grade;
        cout << "He so mon hoc " << i << ": ";
        cin >> hs;

        if (grade >= 0 && grade <= 10 && (heSo.count(hs) > 0)){
            Count_sub++;
            Sum_hs += hs;
            Sum_grade += grade * hs;
        }
    }

    cout << "So mon hoc: " << Count_sub << endl
         << "Tong so he so: " << Sum_hs << endl
         << "Diem trung binh cua " << Count_sub << " mon hoc: " << Sum_grade / Sum_hs;

    return 0;
}










