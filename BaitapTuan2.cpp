// Bài 1
#include <bits/stdc++.h>
using namespace std;
bool Prime (int n) {
    bool res = true;
    if (n == 1) res = false;
    if (n > 1) {
        if (n == 2 || n == 3) res = true;
        else {
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) {
                    res = false;
                    break;
                }
            }
        }
    }
    return res;
}
int main() {
    int n; cin >> n;
    if (Prime (n)) cout << "yes";
    else cout << "no";
    return 0;
}

// Bài 2
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (i - 1); j++) {
            cout << " ";
        }
        for (int j = 1; j <= ((n - i) + 1); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// Bài 3
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= (1 + 2*(i - 1)); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// Bài 4
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i = n; i >= 0; i--) {
        for (int j = 1; j <= (n - i); j++) {
            cout << " ";
        }
        for (int j = 1; j <= (1 + 2*(i - 1)); j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// Bài 6
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j++) {
            cout << j << " ";
        }
        for (int j = 1; j < i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}


