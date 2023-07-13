#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Person{
	private:
		int id;
		char name[20];
		char sex;
		float salary;
		public:
			Person(){
				id=0;
				strcpy(name,"abc");
				sex='M';
				salary=100.00;
			}
			Person (int i,char *n,char s,float sa){
				id=i;
				strcpy(name,n);
				sex=s;
				salary=sa;
			}
			void input(){
				cout<<"ID :";cin>>id;
				cout<<"Name :";cin.seekg(0,ios::end);cin.clear();cin.get(name,20);
				cout<<"Sex :";cin>>sex;
				cout<<"Salary :";cin>>salary;
			}
			void output(){
				cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<endl;
			}
};
void swap(int &a,int &b){
	int temp=a;
	a=b;
	b=temp;
}

void swap(float &a,float &b){
	int temp=a;
	a=b;
	b=temp;
}

void swap(char &a,char &b){
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
	int x=10,y=20;
	float a=15.5,b=33.12;
	char ch1='A',ch2='B';
	Person p(1,"Ratha",'F',400),p1(2,"Dara",'M',900);
	cout<<"*********************** Befor Swapping ***********************\n";
	cout<<"x :"<<x<<"\t"<<"y :"<<y<<endl;
	cout<<"a :"<<a<<"\t"<<"b :"<<b<<endl;
	cout<<"ch1 :"<<ch1<<"\t"<<"ch2 :"<<ch2<<endl;
	cout<<"Output Person Of P :\n";p.output();
	cout<<"Output Person Of P :\n";p1.output();
	cout<<"*********************** After Swapping ***********************\n";
	swap(x,y);
	swap(a,b);
	swap(ch1,ch2);
	swap(p,p1);
	cout<<"x :"<<x<<"\t"<<"y :"<<y<<endl;
	cout<<"a :"<<a<<"\t"<<"b :"<<b<<endl;
	cout<<"ch1 :"<<ch1<<"\t"<<"ch2 :"<<ch2<<endl;
	cout<<"Output Person Of P :\n";p.output();
	cout<<"Output Person Of P :\n";p1.output();		
	getch();
}
