#include<iostream>
#include<conio.h>
using namespace std;
class Point{
	private:
		int x;
		int y;
	public:
		Point ():x(0),y(0){} // (x=0;y=0;)
		Point (int a,int b):x(a),y(b){}//(x=a;y=b)
		void input(){
			cout<<"input x:";cin>>x;
			cout<<"input y:";cin>>y;
		}
		void output(){
			cout<<"("<<x<<","<<y<<")"<<endl;
		}
};
class Circle:private Point{
	private:
		float r;
	public:
		Circle():Point(),r(1){}
		Circle(int x1,int y1,float r1):Point(x1,y1),r(r1){}
		void input(){
			Point::input();
			cout<<"inout radius :";cin>>r;
		}
		void output(){
			Point::output();
			cout<<"Radius :"<<r<<endl;
			cout<<"Area :"<<area()<<endl;
		}
		float area(){ return 3.14*r*r;	}
};
int main(){
	Circle c2,c1(34,61,75);
	cout<<"Data of circle c1:"<<endl;
	c1.output();
	cout<<"input data of circle c2 :"<<endl;
	c2.input();
	cout<<"Data of circle c2:"<<endl;
	c2.output();
	getch();
}
