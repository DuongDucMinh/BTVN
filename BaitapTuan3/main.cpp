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


    return 0;
}















