#include <iostream>
#include <string.h>
#include <cstdlib> // for rand() and srand()
#include <ctime> // for time()

using namespace std;

void swap_p (int& x, int& y) {
    swap(x, y);
}

int main()
{
    int a[30];

    srand(time(NULL));

    for (int i = 0; i < 30; i++) {
        a[i] = rand() % 100 + 1;
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 1; i < 30; i++) {
        for (int j = 1; j < 30; j++) {
            if (a[j - 1] > a[j]) swap_p(a[j - 1], a[j]);
        }
    }

    for (int i = 0; i < 30; i++) {
        cout << a[i] << " ";
    }


    return 0;
}
