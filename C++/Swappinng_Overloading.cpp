#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Person{
	private:
		int id;
		char name[20];
		char gender;
		float salary;
	public:
		Person(){
			id=1;
			strcpy(name,"abc");
			gender='M';
			salary=100;
		};
		Person(int i,char *n,char ge,float sa){
			id=i;
			strcpy(name,n);
			gender=ge;
			salary=sa;
		}
		void input(){
			cout<<"ID :";cin>>id;
			cout<<"Name :";cin.seekg(0,ios::end);cin.clear();cin.get(name,20);
			cout<<"Gender :";cin>>gender;
			cout<<"Salary :";cin>>salary;
		}
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<gender<<"\t"<<salary<<"\t"<<endl;
		}
};
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}
Person swap(Person &a,Person &b){
	Person temp=a;
	a=b;
	b=temp;
}
int main(){
	int a=13,b=34;
	Person p(1,"Dara",'M',800),p1(2,"Mey",'F',300);
	cout<<"Output data Befor Swapping "<<endl;
	cout<<"A :"<<a<<"\t"<<"B :"<<b<<"\t"<<endl;
	p.output();
	p1.output();
	cout<<"Output Data After Swappin "<<endl;
	swap(a,b);
	swap(p,p1);
	cout<<"A :"<<a<<"\t"<<"B :"<<b<<"\t"<<endl;
	p.output();
	p1.output();
	getch();
}
