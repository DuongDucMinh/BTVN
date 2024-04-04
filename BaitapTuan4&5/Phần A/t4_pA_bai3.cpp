#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char daytab_1[2][12] = {
        { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76 },
        { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76 }
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << daytab_1[i][j] << " ";
        }
        cout << endl;
    }
    //in ra A B C D E F G H I J K L
    //      A B C D E F G H I J K L


    char daytab_2[2][12] = {
         65, 66, 67, 68, 69, 70, 71, 72, 73 ,
         65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 12; j++) {
            cout << daytab_2[i][j] << " ";
        }
        cout << endl;
    }
    // in ra A B C D E F G H I A B C
    //       D E F G H I J K L
    // nếu ko chia thành 2 ngoặc riêng biệt
    // thì mảng sẽ tự động chia 12 ptu đầu tiên làm 1 mảng con
    // các phần tử còn lại thuộc mảng con còn lại


    char daytab_3[][12] = {
        { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76 },
        { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76 }
    };
    // in ra như daytab_1

    /*char daytab_4[2][] = {
        { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76 },
        { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76 }
    };*/ // lỗi

    /*char daytab_5[][] = {
        { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76 },
        { 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76 }
    };*/ // lỗi

    return 0;
}
