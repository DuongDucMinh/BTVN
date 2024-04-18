// BAI 8+9
#include <bits/stdc++.h>

using namespace std;

struct Point {
    int x, y;

    Point (int _x, int _y) {
        x = _x;
        y = _y;
    }

    Point () {};

    Point mid_point (const Point a, const Point b) {
        Point mid;
        mid.x = (a.x + b.x)/2;
        mid.y = (a.y + b.y)/2;
        return mid;
    }

};

void print(Point p) {
    cout << p.x << " " << p.y;
}

struct Rect {
    int x, y, w, h;

    Rect (int _x, int _y, int _w, int _h) {
        x = _x;
        y = _y;
        w = _w;
        h = _h;
    }

    Rect () {};

    bool contains(const Point k) {
        if (k.x >= x && k.x <= (x + w) && k.y >= y && k.y <= (y + h)) return true;
        return false;
    }

};

struct Ship {
    Rect tod;
    string id;
    double dx, dy;

    void move(Rect& m) {
        m.x += dx;
        m.y += dy;
    }
};

void display (const Ship& ship) {
    cout << ship.id << endl
         << "(" << ship.tod.x << ";" << ship.tod.y << ")" << endl;
}

void passByValue(Point p) {
    cout << &p << endl;
    p.x = 10;
    p.y = 20;
}

void passByReference(Point &p) {
    cout << &p << endl;
    p.x = 30;
    p.y = 40;
}

int main() {
    Point point;
    point.x = 10;
    point.y = 12;
    print(point);

    Rect rec;
    cin >> rec.x >> rec.y >> rec.w >> rec.h;
    if (rec.contains (point)) cout << "YES";
    else cout << "NO";

    Ship tau;
    cin >> tau.tod.x >> tau.tod.y >> tau.id >> tau.dx >> tau.dy;
    display(tau);
    tau.move(tau.tod);
    display(tau);

    Point p;
    p.x=1;
    p.y=1;
    cout<<&(p.x)<<" "<<&(p.y)<<endl;
    passByValue(p);
    cout<<p.x<<" "<<p.y<<" "<<&(p.x)<<" "<<&(p.y)<<endl;//in ra 1 1 chung to ham da tac dong len 1 ban sao nao do chu khong phai p.x va p.y goc
    passByReference(p);// in ra dung dia chi cua p before
    cout<<p.x<<" "<<p.y<<" "<<&(p.x)<<" "<<&(p.y)<<endl;//In ra 30 40 va dia chi cua p.x va p.y goc

    return 0;
}

// BAI 10

#include <bits/stdc++.h>

using namespace std;

struct Point{
    int x,y;
};

struct Rectangle{
    Point* point;
} ;

int main(){
    Rectangle rect1;
    rect1.point=new Point[2];
    rect1.point[0].x=0;
    rect1.point[0].y=0;
    rect1.point[1].x=20;
    rect1.point[1].y=20;

    Rectangle rect2=rect1;
    rect2.point[0].x=5;
    rect2.point[0].y=5;

    cout<<rect1.point[0].x<<" "<<rect1.point[0].y;

    delete[] rect1.point;
    delete[] rect2.point;
    return 0;
}

// BAI 11
//Bai 11
#include <bits/stdc++.h>

using namespace std;

struct String {
    int n;                           // do dai xau
    char* str;                       // Con trỏ đến mảng char

    // Constructor nhận một xâu kí tự và khởi tạo String từ đó
    String(const char* s) {
        n = strlen(s);               // Tính độ dài của xâu
        str = new char[n + 1];       // Cấp phát bộ nhớ động cho mảng char
        strcpy(str, s);              // Sao chép nội dung của xâu vào str
    }

    // Destructor để giải phóng bộ nhớ động khi đối tượng bị hủy
    ~String() {
        delete[] str;
    }
    void print(){
        cout<<str<<endl;
    }
    void append(const char* s){
        int newlength=n+strlen(s);
        char* temp=new char[newlength+1];
        strcpy(temp,str);
        strcat(temp,s);
        delete[] temp;
        str=temp;
        n=newlength;


    }
};

int main(){
    String s("Chao moi nguoi");
    s.print();
    s.append("toi la trung day");
    s.print();
    return 0;
}












