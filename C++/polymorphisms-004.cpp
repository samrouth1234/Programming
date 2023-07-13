#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class Shape{
	public:
		enum objectType{
			RECTANGLE,
			CIRCLE,
			TRIANGLE
		};
	//	virtual void input()=0;
		virtual void output()=0;
		virtual float area()=0;
		virtual objectType object()=0;
};
class Rectangle :public Shape{
	private:
		float lenght,width;
		public:
			Rectangle(float l=0,float w=0){
				l=lenght;
				w=width;
			}
			virtual void output(){
				cout<<lenght<<"\t"<<width<<"\t"<<area()<<endl;
			}
			virtual float area(){
				return lenght*width;
			}
			virtual objectType object(){
				return RECTANGLE;
			}
};
class Circle :public Shape{
	private:
		float r;
		public:
			Circle(float r1=0){
				r=r1;
			}
			virtual void output(){
				cout<<r<<"\t"<<area()<<endl;
			}
			virtual float area(){
				return r*r*3.14;
			}
			virtual objectType object(){
				return CIRCLE;
			}
};

class Triangle :public Shape{
	private:
		float a,b,c;
		public:
			Triangle(float a1=0,float b1=0,float c1=0){
				a=a1;
				b=b1;
				c=c1;
			}
			virtual void output(){
				cout<<a<<"\t"<<b<<"\t"<<c<<"\t"<<area()<<endl;
			}
			virtual float area(){
				float p,s;
				p = (a+b+c)/2;
				s=sqrt(p*(p-a)*(p-b)*(p-c));
				return s;
			}
			virtual objectType object(){
				return TRIANGLE;
			}
};
int main(){
	Shape *a[8]={
		new Circle(35),new Rectangle(20,10),new Triangle(10,8,9),
		new Circle(45),new Triangle(12,5,9),new Rectangle(40,20),
		new Triangle(12,7,9),new Circle(50)
		};
		for(int i=0;i<8;i++){
			a[i]->output();
		}
	getch();
}
