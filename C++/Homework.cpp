#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
using namespace std;
class Rectangle {
private:
    float l, w;
public:
    Rectangle(float l1 = 0, float w1 = 0) {
        l = l1;
        w = w1;
    }
    void output() {
        cout << l << "\t" << w << endl;
    }
    // excerias area of rectangle
    float area() {
        return l * w;
    }
    // w=width and l=long of Rectagle
    Rectangle operator=(float s) {
        w = sqrt(s/2);
        l = 2 * w;
        return *this;
    }
    // sum  area of object (t1 + t2)  object + object
    float operator+(Rectangle p) {
        return area() + p.area();
    }
    // add float + objcet
    Rectangle operator+(float s) {
        l += s;
        w += s;
        return *this;
    }
    // compain area of rectangle
    int operator>(Rectangle p) {
        return area() > p.area();
    }
    int operator>(float x) {
        return area() > x;
    }
    float operator*() {
        return area();
    }

    float operator!() {
        return sqrt(l * l + w * w);
    }
};
int main() {
    Rectangle t1(20, 10), t2(45, 15), t3;
    float total;
    t3 = 72.0;
    cout << "Rectangle t1:" << endl;
    t1.output();
    cout << "Rectangle t2:" << endl;
    t2.output();
    cout << "Rectangle t3:" << endl;
    t3.output();
    total = t1 + t2;
    cout << "Total area t1 + t2: " << total << endl;
    t3 = t3 + 10.0;
    cout << "Rectangle t3:" << endl;
    t3.output();
    cout << "Area of t1: " << *t1 << endl;
    cout << "Diagonal of t1: " << !t1 << endl;
    if (t1 > t2) {
        cout << "Area of t1 > t2" << endl;
    } else {
        cout << "Area of t1 < t2" << endl;
    }
    if (t1 > 100.0) {
        cout << "Area of t1 > 100" << endl;
    } else {
        cout << "Area of t1 < 100" << endl;
    }
    return 0;
}
