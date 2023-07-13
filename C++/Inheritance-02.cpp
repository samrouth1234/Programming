#include<iostream>
#include<string.h>
#include<conio.h>
using namespace std;
class Person{
	protected:
		int id;
		char name[20];
		char sex;
	public:
		Person(){id=0;strcpy(name,"abc");sex='M';}
		Person(int i,char *n,char s){ id=i ;strcpy(name,n);sex=s;}
		void input(){
			cout<<"Enter id :";cin>>id;
			cout<<"Enter Name:";cin.seekg(0,ios::end);cin.clear();cin.get(name,20);
			cout<<"Enter Sex :";cin>>sex;
		}
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<sex<<"\t";
		}
};
class Academic{
	protected:
		char university[30];
		int year;
	public:
		Academic(){	strcpy(university,"RUPP");year=1; }
		Academic(char *u,int y){ strcpy(university,u); year=y;}
		void input(){
			cout<<"Enter University :";cin.seekg(0,ios::end);cin.clear();cin.get(university,30);
			cout<<"Enter year :";cin>>year;
		}
		void output(){
			cout<<university<<"\t"<<year<<"\t";
		}
};
class Student :public Person,public Academic{
	private:
		int score;
	public:
		// call construtor of class Person and Academic
		Student() : Person(), Academic(){
			score = 0;
		}
		Student(int i,char *na,char s, char *u,int y ,int c):
			Person(i,na,s),Academic(u,y){
			score = c;
			}
		void input()
		{ 	
			 Person::input();
		 	 Academic::input();
			 cout<<"score :";cin>>score;
		}
		void output(){
			Person::output();
			Academic::output();
			cout<<score<<endl;
		}
};
int main(){
	Student s1,s2(1234,"Dara",'M',"NUM",2,7);
	cout<<"Data of student s2"<<endl;
	s2.output();
	cout<<"input data of student s1 :"<<endl;
	s1.input();
	cout<<"Data of student s1 :"<<endl;
	s1.output();
	getch();
}
