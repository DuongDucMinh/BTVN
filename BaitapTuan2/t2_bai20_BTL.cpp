#define lli long long int

#include <bits/stdc++.h>

using namespace std;

string convert (lli money) {
    string m = to_string(money);
    int l = m.size();
    if (l >= 4) {
        m.insert(m.begin() + (l - 3), '.');
        if (l >= 7) m.insert(m.begin() + (l - 6), '.');
    }
    return m;
}

lli phanA (int hour) {
    lli fir = 100 * 12000, sec = 50 * 16000, thi = 50 * 20000;
    if (hour <= 100) return 12000 * hour;
    else {

        int t = hour - 100;
        if (t <= 50) return fir + (t * 16000);
        else {
            if (t > 50 && t <= 100) return fir + sec + ((t - 50) * 20000);
            else return fir + sec + thi + ((t - 100) * 25000);
        }
    }
}

lli phanB (lli TN) {
    lli BH, TN_ct, Thue = 0, TN_st;
    BH = TN * 9 / 100;
    TN_ct = TN - BH;

    lli fir = 500000 * 10 / 100, sec = 500000 * 15 / 100, Hieu = TN_ct - 1000000;
    if (Hieu > 0 && Hieu <= 500000) Thue = Hieu * 10 / 100;
    else {
        if (Hieu > 500000 && Hieu <= 1000000) Thue = fir + ((Hieu - 500000) * 15 / 100) ;
        else Thue = fir + sec + ((Hieu - 1000000) * 20 / 100) ;
    }

    TN_st = TN - BH - Thue;

    return TN_st;

}

lli phanC (lli vay) {
    lli no = vay, lsv = vay * 2 / 100;
    for (int i = 1; i <= 12; i++) {
        no += lsv;
        lsv = no * 2 / 100;
    }
    return no;
}

void phanD () {
    int hour = 155, month = 1;
    lli vay = 10000000, lsv , no = vay, TN_st, tientraNH;

    TN_st = phanB(phanA(hour));
    cout << "Thu nhap sau thue tu viec lam them : " << convert(TN_st) << endl;
    tientraNH = TN_st - 500000;

    while (no) {
        lsv = no * 2 / 100;
        cout << "Tien lai Ngan Hang vao cuoi thang " << month << " : " << convert(lsv) << endl;

        if ((no + lsv) > tientraNH) no = no + lsv - tientraNH;
        else no = 0;
        cout << "So tien du no vao dau thang " << ++month << " : " << convert(no) << endl;
    }

    cout << "Sau " << month << " thang thi sv hoan het no !";
}


void phanE () {
    unordered_map<int, int> lamThem {
        {9, 155}, {10, 145}, {11, 125}, {12, 135}, {1, 100}, {2, 100},
        {3, 145}, {4, 135}, {5, 100}, {6, 155}, {7, 170}, {8, 180}
    };

    int hour = 155, month = 9, year = 2016, Count = 0;
    lli vay = 10000000, no = vay, lsv, TN_st, tientraNH, khoanCuoi;

    while (no) {
        TN_st = phanB(phanA(lamThem[month]));
        cout << "Thu nhap sau thue tu viec lam them cuoi thang " << month << "/" << year << " : " << convert(TN_st) << endl;
        tientraNH = TN_st - 500000;

        lsv = no * 2 / 100;
        cout << "Tien lai Ngan Hang vao cuoi thang " << month << "/" << year << " : " << convert(lsv) << endl << endl;

        if ((no + lsv) > tientraNH) no = no + lsv - tientraNH;
        else {
            khoanCuoi = no + lsv;
            no = 0;
        }

        if (month == 12) {
                month = 1;
                year++;
        } else month++;
        cout << "So tien du no vao dau thang " << month << "/" << year << " : " << convert(no)  << endl;

        Count++;
    }

    cout << endl << "Sau " << Count << " thang thi sv thanh toan het no !" << endl;

    cout << endl << "Khoan thanh toan cuoi cung voi ngan hang : " << convert(khoanCuoi) << endl;
}

int main() {
    phanD();
    phanE();
    return 0;
}

