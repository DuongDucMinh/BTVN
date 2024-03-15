
#include <bits/stdc++.h>

using namespace std;

int main() {
    int grade, Count = 0;
    vector<int> sub;
    do {
        cout << "Diem mon hoc " << ++Count << ": ";
        cin >> grade;
        if (grade >= 0 && grade <= 10) sub.push_back(grade);
        else {
            while (grade > 10) {
                cout << "Nhap lai diem mon hoc " << Count
                     << " (trong khoang tu 0..10): ";
                cin >> grade;
            }
            if (grade < 0) {
                cout << "So mon hoc: " << Count - 1 << endl;
                double avr = 0;
                for (auto x : sub) avr += x;
                cout << "Diem trung binh cua " << Count - 1 << " mon hoc: " << avr / sub.size();
                break;
            } else sub.push_back(grade);
        }
    } while (1);
    return 0;
}










