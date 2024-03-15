#include <bits/stdc++.h>
using namespace std;
bool isSt (int a, int b, int c) {
    if ((a < (b + c)) && (b < (a + c)) && (c < (a + b))) return true;
    else return false;
}
void whatStr (int a, int b, int c) {
    if (a == b && a == c) cout << "deu";
    else {
        if ((a == b) || (b == c) || (a == c)) cout << "can";
        else {
            if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (a*a + c*c == b*b)) cout << "vuong";
            else cout << "thuong";
        }
    }
}
int main() {
    int a, b, c;
    cin >> a >> b >> c;
    if (isSt(a, b, c)) {
        cout << a + b + c << endl;
        whatStr (a, b, c);
    } else cout << "Invalid" ;
    return 0;
}
