#include <iostream>

using namespace std;

char* weird_string() {
   char c[] = "123345";
   return c;
}

int main() {
    char* ptr = weird_string();
    cout << ptr << endl;
    return 0;
}

/*  Note:
    trình biên dịch sẽ cảnh báo về việc trả về địa chỉ của một biến cục bộ (c) từ một hàm
    Output của chương trình này có thể là bất kỳ giá trị nào,
    bởi vì biến c trong hàm weird_string() là một biến cục bộ,
    và sau khi hàm kết thúc, bộ nhớ được sử dụng cho biến này có thể bị giải phóng.
    Do đó, việc truy cập vào địa chỉ của c từ hàm main() sẽ dẫn đến kết quả không xác định hoặc lỗi. */
