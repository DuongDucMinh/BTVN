#include <iostream>

// Hàm đếm số số chẵn trong mảng
int count_even(int* arr, int size) {
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    // Khởi tạo mảng
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Gọi hàm count_even cho 5 phần tử đầu mảng
    int count_first = count_even(arr, 5);
    std::cout << "So so chan trong 5 ptu dau mang: " << count_first << std::endl;

    // Gọi hàm count_even cho 5 phần tử cuối mảng
    int count_last = count_even(arr + 5, 5);
    std::cout << "So so chan trong 5 ptu cuoi mang: " << count_last << std::endl;

    return 0;
}

