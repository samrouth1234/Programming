#include<iostream>
#include<conio.h>
#include<string.h>
#include<math.h>
using namespace std;
class Rectangle {
	private:
		float l;
		float w;
	public:
		// create construtor
		Rectangle(float l1=0,float w1=0){
			l=l1;
			w=w1;
		}
		void output(){
			cout<<"("<<l<<","<<w<<")"<<endl;
		}
		//  Area  of Rectagle
		float area(){
			return l*w;
		}
		
		// fiend of l and w
		Rectangle operator =(float s){
			w = sqrt(s/2);
        	l = 2 * w;
        	return *this;
		}
		
		// sum (objects + ojbects) area of reactangle return is values of flaot
		float operator+(Rectangle p) {
        	return area() + p.area();
    	}
    	
    	// add values flaot into objects
    	
    	Rectangle operator+(float s) {
        	l += s;
        	w += s;
        	return *this;
    	}
    	
    	 // compain area of rectangle (object (area) and objects(area))
    	int operator>(Rectangle p) {
        	return area() > p.area();
    	}
		
		// comparin objects (area) and values
		int operator>(float x) {
        	return area() > x;
    	}
    	// excute Diagonal of Rectangle
    	float operator*() {
        	return area();
    	}

    	float operator!() {
        	return sqrt(l * l + w * w);
    	}
    	
};
int main(){
	Rectangle t1(12,34),t2(45,23),t3;
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
    // add vlues into objects
    t3 = t3 + 10.0;
    cout << "Rectangle t3:" << endl;
    t3.output();
    // compaiction (objects t1 and objects t2)
    cout << "Area of t1: " << *t1 << endl;
    cout << "Diagonal of t1: " << !t1 << endl;
    if (t1 > t2) {
        cout << "Area of t1 > t2" << endl;
    } else {
        cout << "Area of t1 < t2" << endl;
    }
    // compaiction (objects t1 and values of float)
    if (t1 > 100.0) {
        cout << "Area of t1 > 100" << endl;
    } else {
        cout << "Area of t1 < 100" << endl;
    }
	getch();
}

