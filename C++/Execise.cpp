#include<iostream>
#include<conio.h>
using namespace std;
class Math{
	private:
		int x;
		int y;
	public:
		Math(int a=12,int b=45 ){
			x=a;
			y=b;
		}
		void input(){
			cout<<"Enter Number =";cin>>x;
			cout<<"Enter Number =";cin>>y;
		}
		float PPCM (){
			if((x%2 || y%2)==0){
				int result=x/2;
				int result1=y/2;
				cout<<"Number :"<<result<<endl;
				cout<<"Number :"<<result1<<endl;
			}
		}
		void output(){
			cout<<"Num1 :"<<x<<endl;
			cout<<"Num2 :"<<y<<endl;
		}	
};
int main (){
	Math a;
	cout<<"Input of Element :"<<endl;
	a.input();
	cout<<"Output of Element :"<<endl;
	a.output();
	cout<<"PPCM :"<<endl;
	a.PPCM();
	getch();
}
