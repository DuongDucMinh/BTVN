#include <iostream>
using namespace std;
bool kiemtra(string S) {
    bool k = true;
    int l;
    l=S.length();
    for (int i=0; i<l+1; i++) {
        char x1=S[i], x2=S[l-1-i];
        if (x1!=x2) {
            k = false;
            break;
        }
        if (i==int(l/2)) {
            k = true;
            break;
        }
    }
    return k;
}
int main() {
    int N; cin >> N;
    while (N--) {
        long long int a, b, count = 0;
        cin >> a >> b;
        for (auto i = a; i <= b; i++) {
            string s = to_string(i);
            if (kiemtra(s)) count++;
        }
        cout << count << endl;
    }
    return 0;
}
