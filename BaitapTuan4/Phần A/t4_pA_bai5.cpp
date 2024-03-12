#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    int N; cin >> N;
    char str[N];
    cout << "Nhập chuỗi : " ;
    cin.getline(str, N);
    cout << "_" << str << "_";

    // TH1: độ dài xâu = N   => in ra đúng xâu bị cắt phần tử cuối
    // TH2: độ dài xâu > N   => in ra xâu có độ dài = N (từ str[0] -> str[N-1])
    //      phần tử từ vị trí thứ N trở về sau bị cắt
    // TH3: độ dài xâu < N   => in ra đúng xâu đã nhập

    return 0;
}
