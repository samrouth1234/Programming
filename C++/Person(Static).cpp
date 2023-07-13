#include<iostream>
#include<conio.h>
using namespace std;
class Person{
	private:
		int id;
		char name[20];
		char sex;
		float salary;
	public:
		void input(){
			cout<<"Enter id =";cin>>id;
			cout<<"Enter name =";cin.seekg(0,ios::end);cin.clear();cin.get(name,20);
			cout<<"Enter sex =";cin>>sex;
			cout<<"Enter salary =";cin>>salary;
		}
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<endl;
		}
		static float total(Person a[],int n);
};
float Person::total(Person a[],int n){
	float s=0;
	for(int i=0;i<n;i++)
		s=s+a[i].salary;
		return s;	
}
int main(){
	Person *x;int n;float s1;
	cout<<"Numbers of Person :";cin>>n;
	x=new Person[n];
	cout<<"input data all Person :"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Person :"<<(i+1)<<endl;
		x[i].input();
	}
	cout<<"Output data all Person"<<endl;
	for(int i=0;i<n;i++)
	x[i].output();
	s1=Person::total(x,n);
	cout<<"Total salary ="<<s1<<endl;
	getch();
}
