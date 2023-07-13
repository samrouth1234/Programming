/*
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
		Person();
		Person(int i,char *n,char s,float sa);
		Person(Person &p);
		~Person();
		void input();
		void output();
};
// how to write construtor outter class
Person::Person(){
	id=123;
	strcpy(name,"ok");
	sex='M';
	salary=700;
}
Person::Person(int i,char *n,char s,float sa){
	id=i;
	strcpy(name,n);
	sex=s;
	salary=sa;
}
Person::Person(Person &p){
	id=p.id;
	strcpy(name,p.name);
	sex=p.sex;
	salary=p.salary;
}
Person::~Person(){
	cout<<"Name"<<name<<"Adress"<<this<<endl;
}
void Person::input(){
	cout<<"Enter Id :";cin>>id;
	cout<<"Enter Name :";cin.clear();cin.seekg(0,ios::end);cin.get(name,20);
	cout<<"Enter Sex :";cin>>sex;
	cout<<"Enter salary :";cin>>salary;
}
void Person::output(){
	cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<endl;
}
int main(){
	Person p1,p2(123,"kk",'M',500),p3(p1);
	cout<<"Output Data of Construtor P1:";
	p1.output();
	cout<<"Output Data of Construtor P2:";
	p2.output();
	cout<<"Output Data of Construtor P3:";
	p3.output();
	getch();
}
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Ratangle{
	private:
		float langth;
		float width;
		float area;
	public:
		Ratangle();
		Ratangle(float l,float w);
		Ratangle(Ratangle &p);
		~Ratangle();
		void input();
		void output();
		float getArea(){return area;}
		void sum();
		void sort();
};
Ratangle::Ratangle(){
	langth=23;
	width=50;	
}
Ratangle::Ratangle(float l,float w){
	langth=l;
	width=w;
}
Ratangle::Ratangle(Ratangle &p){
	langth=p.langth;
	width=p.width;
}
Ratangle::~Ratangle(){
	cout<<"Name :"<<langth<<"Address "<<this<<"Was delete "<<endl;
}
void Ratangle::input(){
	cout<<"Input langth :";cin>>langth;
	cout<<"Input Width :";cin>>width;
}
void Ratangle::output(){
	cout<<"("<<langth<<","<<width<<")"<<endl;
}
void Ratangle::sum(Ratangle a[],int n){
	float s=0;
	for(int i=0;i<n;i++){
		s=s+a[i].getArea();
	}
}
void Ratangle::sort(Ratangle a[],int n){
	Ratangle temp;
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;i++)
	if(a[i].getArea()<a[j].getArea()){
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
}
int main(){
	Ratangle p1,p2(23,45);
	getch();
}
