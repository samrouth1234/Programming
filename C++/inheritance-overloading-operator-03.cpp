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

			void output(){
				cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<endl;
			}
			// prefix ++p when return used ++p
    		Person operator++() {
       		 salary++;
        	return *this;
    		}
    		//postfix p++  when return used p++
    		Person operator ++(int){
    			float x;
    			x=salary++;
    			return Person (id,name,sex,x);
			}
    		// prefix --p when return used --p
    		Person operator --(){
    			--salary;
    			return *this ;
			}
			// postfix p-- when return used p--
			Person operator --(int){
				float x;
				x=salary--;
				return Person(id,name,sex,x);
			}
			// operator overloading used input
			friend istream& operator >> (istream& input,Person &p){
				friend istream & operator >>(istream &input ,Person &p){
				cout<<"ID :";input>>p.id;
				cout<<"Name :";input.seekg(0,ios::end);input.clear();input>>p.name;
				cout<<"Gander :";input>>p.gander;
				cout<<"Salary :";input>>p.salary;
				return input;	
			}
			}
			//  operator overloading used output 
			friend ostream& operator <<(ostream &output,Person &p){
				output<<p.id<<"\t"<<p.name<<"\t"<<p.sex<<"\t"<<p.salary<<endl;
				return output;
			}				
};

int main(){
	Person p(1,"Ratha",'F',500),p1,p2;
	cout<<"================= Operator compound Unary Operators ================="<<endl;
	cout<<"Input Information of Person :"<<endl;
	cin>>p;
	cout<<"Person of p :"<<endl<<p;
	cout<<"Person p :"<<endl;
	p.output();
	// prefix ++p when return used ++p
	p1=++p;
	cout<<"Person p1 :"<<endl;
	p1.output();
	//postfix p++  when return used p++
	p1=p++;
	cout<<"Person p1 :"<<endl;
	
	p1.output();
	
	// prefix --p when return used --p
	p2=--p1;
	cout<<"Person p2 :"<<endl;
	p2.output();
	
	// postfix p-- when return used p--
	p2=p1--;
	cout<<"Person p2 :"<<endl;
	p2.output();
	
	getch();
}
