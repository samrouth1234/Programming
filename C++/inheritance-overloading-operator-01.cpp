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
				salary=129.00;
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
			
			/*
			// create function friend of output of function munbers
			friend void output(Person t){
				cout<<t.id<<"\t"<<t.name<<"\t"<<t.sex<<"\t"<<t.salary<<endl;
			}
			
			*/

			void output(){
				cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<endl;
			}
			// operator compound Assignment Operators (+= -= ==)
			Person operator +=(float x){
				salary+=x;
				return *this ;
			}
			Person operator -=(float x){
				salary-=x;
			// return * this (pointer) = return (id,name,sex,salary)
				return *this ;
			}
			// Comparison operators
			
			int operator >(Person p){
				// it return two values 0 and 1 true=1 false = 0
				return (salary >p.salary);
			}
//			friend int operator > (Person t1,Person t2){
//				return (t1.salary>t2.salary);
//			}
			// comparison Objects and float
//			int operator > (float x){
//				return (salary >x);
//			}
			// comparison float and Objcets
//			int operator > (Person t){
//				float x ;
//				return  x > t.salary;
//			}
				
};

int main(){
	Person p(1,"Ratha",'F',500),p1(1,"Dara",'M',400);
	cout<<"================= Operator compound Assignment Operators ================="<<endl;
	cout<<"Input Data Person  p1:"<<endl;
	p1.output();
	p1+=25.0;
	cout<<"Output Data After Sum of p1:"<<endl;
	p1.output();
	cout<<"================Operator Dash================"<<endl;
	p1-=25.0;
	cout<<"Output Data After Dash of p1:"<<endl;
	p1.output();
	cout<<"================= Comparison operators ================="<<endl;
	cout<<"Output Data Person of p:"<<endl;
	p.output();
	
	// comparison Objects and float
	if(p > p1){
		cout<<"Salary of p > p1 "<<endl;
	}else{
		cout<<"Salary  p < p1 "<<endl;
	}
	getch();
}
