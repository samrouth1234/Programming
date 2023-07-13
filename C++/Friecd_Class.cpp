#include<iostream>
#include<conio.h>
using namespace std;
class A{
	friend class B;
	private:
		int x;
	public:
		void input(){
			cout<<"INPUT X :";cin>>x;
		}
		void output(){
			cout<<"X :"<<x<<endl;
		}
};
class B{
	private:
		int y;
	public:
		void input(){
			cout<<"INPUT X :";cin>>y;
		}
		void output(){
			cout<<"Y :"<<y<<endl;
		}
		int sum(A a){
			return (a.x+y);
		}
};
int main(){
	A a;B b;int s;
	cout<<"input data :";a.input();
	cout<<"input data :";b.input();
	cout<<"Data a :";a.output();
	cout<<"Data b :";b.output();
	s=b.sum(a);
	cout<<"Sum :"<<s<<endl;
	getch();
}
