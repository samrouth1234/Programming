#include<iostream>
#include<conio.h>
using namespace std;
class Shape{
	public:
	virtual void input()=0;
	virtual void output()=0;
	virtual float area()=0;
};
class Rectangle : public Shape{
	private:
		float l,w;
	public:
			Rectangle(float l1=0,float w1=0){
				l=l1;
				w=w1;
			}
			virtual void input(){
				cout<<"Lenght :";cin>>l;
				cout<<"Widthn:";cin>>w;
			}
			virtual void output(){
				cout<<l<<"\t"<<w<<"\t"<<area()<<endl;
			}
				virtual float area(){
				return w*l;
			}
			
};
class Cricle : public Shape{
	private:
		float r;
	public:
		Cricle(float r1=0){
			r=r1;
		}
		virtual void input(){
			cout<<"Enter Redius :";cin>>r;
		}
		virtual void output(){
			cout<<r<<"\t"<<area()<<endl;
		}
		virtual float area(){
			return 3.14*r*r;
		}
};

int main(){
	Shape *a[5]={
				new Rectangle(20.00,10.00),
				new Cricle(40.00),
				new Cricle(60.00),
				new Rectangle(80,30),
				new Cricle(10.00)
				};
				for(int i=0;i<5;i++)
				a[i]->output();
	getch();
}
