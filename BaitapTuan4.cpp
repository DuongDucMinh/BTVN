// Phần A
// Bài 1
#include <iostream>

using namespace std;

//int a[];
//int a[2] = {1, 2, 3, 4}; // lỗi
//int a[10] = {1, 2, 3, 4};
int a[] = {1, 2, 3, 4};

int main()
{
    //int a[];
    //int b[10] = {1, 2, 3, 4};  //độ rộng = 10, số phần tử = 4
    int b[] = {1, 2, 3, 4};
    for (int i = 0; i < 10; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
    for (int i : a) cout << i << " ";
    return 0;
}

// Bài 2
#include <iostream>
#include <string.h>

using namespace std;

char str1[10];
char str2[5] = {"abcd"} ;
//char str3[4] = {"abcd"} ; // lỗi
//char str4[3] = {"abcd"} ; // lỗi
char str5[] = {"abcd"};

int main()
{
    char str_1[10];

    char str_2[5] = {"abcd"};
    for (auto i : str_2) cout << i << " ";  // in ra a b c d
    cout << endl << str_2 << endl; // in ra abcd

    //char str_3[4] = {"abcd"} ; // lỗi vì ngoài 4 kí tự còn có kí tự null ở cuối
    //char str_4[3] = {"abcd"} ; // lỗi


    char str_5[] = {"abcd"};
    cout << sizeof(str_5) << endl; // kích thước mảng = 5 => có kí tự null ở cuối mảng
    for (int i = 0; i < 10; i++) cout << str_5[i] << " "; // in ra: a b c d (null) a b c d (null)
    cout << endl << str_5 << endl; // in ra abcd


    char str_6[10] = {"abcd"};
    cout << sizeof(str_6) << " " << strlen(str_6) << endl; // kích thước mảng = 10, độ dài mảng = 4
    for (int i = 0; i < 10; i++) cout << str_6[i] << " "; //in ra: a b c d
    cout << endl << str_6 << endl; // in ra abcd

    //Mảng kích thước N lưu được string độ dài tối đa là N-1

    return 0;
}

// Bài 3
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

//Bài 4 <còn ý cuối>
#include <iostream>
#include <string.h>

using namespace std;


int main()
{
    char arr[3] = {65, 66, 67};
    cout << arr[-1] << " " << arr[3] << " " << arr[4] << endl ;
    // không lỗi nhưng in ra các kí tự đặc biệt

    arr[-1] = 'K';
    arr[3] = ')';
    arr[4] = '*';
    cout << arr[-1] << " " << arr[3] << " " << arr[4] << endl ;
    // không lỗi và in ra đúng như những gtri đã gán

    char arrN[3][4] ;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++ ) {
            cin >> arrN[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << arrN[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}


// Bài 5
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

// Bài 6
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

// Phần C

// 1. Tìm lặp
#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long N;
    cin >> N;
    long long a[N];
    set<long long> lib;

    for (auto& x : a) {
        cin >> x;
        lib.insert(x);
    }

    if (lib.size() == N) cout << "Yes";
    else cout << "No";

    return 0;
}

// 2. Xâu đối xứng
#include <bits/stdc++.h>

using namespace std;

void test(string S) {
    int l = S.size();
    for (int i = 0; i < l; i++) {
        if (S[i] != S[l-1-i]) {
            cout << "No";
            break;
        }
        if (i == int(l/2)) {
            cout << "Yes";
            break;
        }
    }
}

int main()
{
    string k; cin >> k;
    test(k);
    return 0;
}

// 3. Số đối gương
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

// 4. Dò mìn
#include <bits/stdc++.h>

using namespace std;

void print (vector<vector<char>>& matrix, int _m, int _n) {
    for (int i = 1; i <= _m; i++) {
        for (int j = 1; j <= _n; j++) {
            if (matrix[i][j] != '*') {
                int Count = 0;
                for (int _i = (i - 1); _i <= (i + 1); _i++) {
                    for (int _j = (j - 1); _j <= (j + 1); _j++) {
                        if (_i == i && _j == j) continue;
                        if (matrix[_i][_j] == '*') Count++;
                    }
                }
                matrix[i][j] = Count + 48;
            }
        }
    }

    // in ma tran
    for (int i = 1; i <= _m; i++) {
        for (int j = 1; j <= _n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    cin >> m >> n;

    vector<vector<char>> matrix(m + 2, vector<char>(n + 2));
    for (int i = 0; i < (m + 2); i++) {
        for (int j = 0; j < (n + 2); j++) {
            if (i == 0 || i == (m + 1) || j == 0 || j == (n + 1)) matrix[i][j] = 0;
            else cin >> matrix[i][j];
        }
    }

    print(matrix, m, n);

    return 0;
}


// 5. Bảng xoắn ốc
#include <bits/stdc++.h>

using namespace std;

void dk(int so) {
    if (so > 0 && so < 10) cout << " " << so << " ";
    else cout << so << " ";
}

void print(int x, int y) {
    int matrix[x][y], num = 1;
    int top = 0, bot = x - 1, left = 0, right = y - 1;

    while (top <= bot && left <= right) {
        for (int i = left; i <= right; i++) matrix[top][i] = num++;
        top++;
        // in hang ngang tren cung

        for (int i = top; i <= bot; i++) matrix[i][right] = num++;
        right--;
        // in hang doc ngoai cung ben phai

        if (top <= bot) {
            for (int i = right; i >= left; i--) matrix[bot][i] = num++;
            bot--;
        }
        // in hang ngang duoi cung

        if (left <= right) {
            for (int i = bot; i >= top; i--) matrix[i][left] = num++;
            left++;
        }
        // in hang doc ngoai cung ben trai
    }

    // in ma tran
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            dk(matrix[i][j]);
        }
        cout << endl;
    }
}

int main()
{
    int x, y;
    cin >> x >> y;

    if (x > 0 && y > 0 && x <= 10 && y <= 10) {
        print(x, y);
    }

    return 0;
}

// 7. Banner
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

void print(const string& word) {
    map<char, vector<string>> patterns = {
        {'A', {"  #   ", " # #  ", "#   # ", "##### ", "#   # ", "#   # "}},
        {'B', {"####  ", "#   # ", "####  ", "#   # ", "#   # ", "####  "}},
        {'C', {" #### ", "#    #", "#     ", "#     ", "#    #", " #### "}},
        {'D', {"###   ", "#  #  ", "#   # ", "#   # ", "#  #  ", "###   "}},
        {'E', {"##### ", "#     ", "##### ", "#     ", "#     ", "##### "}},
        {'F', {"##### ", "#     ", "##### ", "#     ", "#     ", "#     "}},
        {'G', {" #### ", "#    #", "#     ", "#  ###", "#    #", " #### "}},
        {'H', {"#   # ", "#   # ", "##### ", "#   # ", "#   # ", "#   # "}},
        {'I', {"##### ", "  #   ", "  #   ", "  #   ", "  #   ", "##### "}},
        {'J', {"  ### ", "    # ", "    # ", "    # ", "#   # ", " ###  "}},
        {'K', {"#   # ", "#  #  ", "###   ", "#  #  ", "#   # ", "#   # "}},
        {'L', {"#     ", "#     ", "#     ", "#     ", "#     ", "##### "}},
        {'M', {"#   # ", "## ## ", "# # # ", "#   # ", "#   # ", "#   # "}},
        {'N', {"#   # ", "##  # ", "# # # ", "#  ## ", "#   # ", "#   # "}},
        {'O', {" ###  ", "#   # ", "#   # ", "#   # ", "#   # ", " ###  "}},
        {'P', {"####  ", "#   # ", "####  ", "#     ", "#     ", "#     "}},
        {'Q', {" ###  ", "#   # ", "#   # ", "# # # ", "#  ## ", " ####+"}},
        {'R', {"####  ", "#   # ", "####  ", "#  #  ", "#   # ", "#   # "}},
        {'S', {" #### ", "#     ", " ###  ", "    # ", "#   # ", "####  "}},
        {'T', {"##### ", "  #   ", "  #   ", "  #   ", "  #   ", "  #   "}},
        {'U', {"#   # ", "#   # ", "#   # ", "#   # ", "#   # ", " ###  "}},
        {'V', {"#   # ", "#   # ", "#   # ", "#   # ", " # #  ", "  #   "}},
        {'W', {"#   # ", "#   # ", "#   # ", "# # # ", "## ## ", "#   # "}},
        {'X', {"#   # ", " # #  ", "  #   ", "  #   ", " # #  ", "#   # "}},
        {'Y', {"#   # ", " # #  ", "  #   ", "  #   ", "  #   ", "  #   "}},
        {'Z', {"##### ", "   #  ", "  #   ", " #    ", "#     ", "##### "}},
        {' ', {"      ", "      ", "      ", "      ", "      ", "      "}}
    };

    for (int i = 0; i < 6; ++i) {
        for (char letter : word) {
            cout << patterns[toupper(letter)][i] << "  ";
        }
        cout << endl;
    }
}

int main() {
    string word; cin >> word;

    if (word.length() <= 12) {
        print(word);
    }

    return 0;
}


// Bài 1
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    double a[n];
    for (auto& x : a) cin >> x;

    double avg = 0, ps = 0;
    for (auto x : a) avg += x;
    avg /= n;

    for (auto x : a) {
        ps += ((x - avg)*(x - avg));
    }
    ps /= n;

    cout << avg << endl << ps;

    return 0;
}


// Bài 2
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N, MAX, MIN, countL = 0, sumC = 0;
    cin >> N;
    int arr[N];
    for (auto& x : arr) cin >> x;
    MAX = arr[0];
    MIN = arr[0];

    for (int i = 0; i < N; i++) {
        if (arr[i] >= MAX) MAX = arr[i];

        if (arr[i] <= MIN) MIN = arr[i];

        if (arr[i] % 2 == 0) sumC += arr[i];
        else countL++;
    }

    cout << MIN << endl << MAX << endl
         << sumC << endl << countL;

    return 0;

}

// Bài 3
#include <bits/stdc++.h>

using namespace std;

int main() {
    int N; cin >> N;
    int a[N], b[10] = {0};

    for (auto& x : a) {
        cin >> x;
        b[x]++;
    }

    for (int i = 0; i < 10; i++) {
        cout << "so luong so " << i << " : " << b[i] << endl;
    }

    return 0;

}

// Bài 4
#include <bits/stdc++.h>

using namespace std;

void print (int x) {
    if (x > 0 && x < 10) cout <<  " " << x << " ";
    else cout << x << " ";
}

void solution (vector<vector<int>> sol, int n) {
    for (int i = 0; i < n; i++) {
        sol[i].resize(i + 1);
        sol[i][0] = 1;
        sol[i][i] = 1;
        if (i >= 2) {
            for (int j = 1; j < i; j++) {
                sol[i][j] = sol[i - 1][j - 1] + sol[i - 1][j];
            }
        }
    }

    for (int i = 0; i < n; i++){
        for (int j : sol[i]) print(j);
        cout << endl;
    }

}

int main() {
    int n; cin >> n;
    vector<vector<int>> sol(n);

    solution(sol, n);

    return 0;

}


















