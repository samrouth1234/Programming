#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Person{
	private:
		int id;
		char name[20];
		char gander;
		float salary;
	public:
		Person(){
			id=1;
			strcpy(name,"abc");
			gander='M';
			salary=300;
		}
		Person(int i,char *n,char ga ,float sa){
			id=i;
			strcpy(name,n);
			gander=ga;
			salary=sa;
		}
		
		void input(){
			cout<<"ID :"<<endl;
			cin>>id;
			cout<<"NAME :"<<endl;
			cin.seekg(0,ios::end);cin.clear();cin.get(name,20);
			cout<<"SALARY :"<<endl;
			cin>>salary;
			
		}
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<gander<<"\t"<<salary<<endl;
		}
		
		Person operator ++(){
			salary++;
			return *this;
		}
		
		Person operator ++(int){
			float x;
			x=salary++;
			return Person(id,name,gander,x);
		}
		// Insertion operator we used instead function output
		friend ostream & operator <<(ostream &output ,Person &p){
			output<<p.id<<"\t"<<p.name<<"\t"<<p.gander<<"\t"<<p.salary<<endl;
		return output;	
		}
		// Extraction operator we used instead function input
		
		friend istream & operator >>(istream &input ,Person &p){
			cout<<"ID :";input>>p.id;
			cout<<"Name :";input.seekg(0,ios::end);input.clear();input>>p.name;
			cout<<"Gander :";input>>p.gander;
			cout<<"Salary :";input>>p.salary;
		return input;	
		}
		// access data numbers in class Person
		operator int(){
			return id;
		}
		operator char *(){
			return name;
		}
		operator char (){
			return gander;
		}	
};
int main(){
	Person p(1,"Dara",'M',200),p1;	
	// Insertion operator
	cout<<"Insertion operator we used instead function output"<<endl;
	cout<<p;
	// Extraction operator
	cout<<"Input Data of Person :"<<endl;
	cin>>p;
	// Prefix of operator
	cout<<"Prefix Of Salary :"<<endl;
	p1=++p;
	p1.output();
	// Postfix of operator
	cout<<"Postfix Of Salary :"<<endl;
	p1=p++;
	p1.output();
	
	cout<<"ID :"<<(int)p<<endl;
	cout<<"Name :"<<(char *)p<<endl;
	cout<<"Gender :"<<(char)p<<endl;
	
	return 0;
}
