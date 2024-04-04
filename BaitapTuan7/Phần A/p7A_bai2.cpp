#include <bits/stdc++.h>

using namespace std;

// Hàm in kích thước mảng
void printArraySize(int* arr, int size) {
    cout << "Kich thuoc cua mang trong ham: " << sizeof(arr) << " bytes" << endl;
    cout << "So phan tu cua mang trong ham: " << size << endl;
}

// Hàm f nhận tham số là một mảng

template <size_t N>
void f(int (&arr)[N]) {
    cout << "Kich thuoc cua mang trong ham f: " << sizeof(arr) << " bytes" << endl;
    cout << "So phan tu cua mang trong ham f: " << N << endl;
}

int main() {
    int A[] = {1, 2, 3, 4, 5};

    // In kích thước của mảng A từ bên ngoài hàm
    cout << "Kich thuoc cua mang tu ben ngoai ham: " << sizeof(A) << " bytes" << endl;
    cout << "So phan tu cua mang tu ben ngoai ham: " << sizeof(A) / sizeof(A[0]) << endl;

    // Gọi hàm f với mảng A
    f(A);

    // Gọi hàm in kích thước của mảng
    printArraySize(A, sizeof(A) / sizeof(A[0]));

    return 0;
}
