/*
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Eletricity{
	protected:
		int wkh;
	public:
		Eletricity(){
			wkh=0;
		}
		Eletricity(int k){
			wkh=k;
		}
		void input(){
			cout<<"Enter Wkh :";cin>>wkh;
		}
		void output(){
			cout<<payment()<<"\t";
		}		
		float payment(){
			float pay;
			if(wkh<=50) pay=wkh*450;
			else if(wkh <=100) pay=wkh*650;
			else if(wkh <=200) pay =wkh*720;
			else pay=wkh*850;
			return pay;
		}
		
};
class Water {
	protected:
		int vol;
		public:
			Water(){
				vol=0;
			}
			Water(int v){
				vol=v;
			}
		void input(){
			cout<<"Enter wa :";cin>>vol;
		}
		void output(){
			cout<<payment()<<endl;
		}
		
		float payment(){
			float pay;
			if(vol<=50) pay=vol*350;
			else if(vol <=100) pay=vol*750;
			else if(vol <=200) pay =vol*820;
			else pay=vol*950;
			return pay;
		}	
};
class Customer :public Eletricity ,public Water{
	private:
		char name[20];
		public:
		Customer() : Eletricity(), Water(){
			strcpy(name,"acb");
		}
		Customer(char *n,int w ,int v):
			Eletricity(w),Water(v){
			strcpy (name,n);
		}
		void input(){
			cout<<"Input Name :";cin.seekg(0,ios::end);cin.clear();cin.get(name,20);
		}
		void output(){
			cout<<name<<"\t";
			Eletricity::output();
			Water::output();
		}
		float payment(){
			return Eletricity::payment()+Water::payment();
		}			
};
Customer *maxWater(Customer a[] ,int n){
	Customer *p;
	p=&a[0];
	for(int i=1;i<n;i++)
		if(p->Water::payment()<a[i].Water::payment()) p=&a[i];
		return p;
}
int main(){
	Customer *ptr, a[5]={
		Customer("Dara",123,809),Customer("Mey",100,200),Customer("Set",40,300),Customer("Routh",500,900),Customer("Gra",773,200)
		};
		cout<<"Output All Customer :"<<endl;
		for(int i=0;i<5;i++){
			a[i].output();
		}
		ptr=maxWater(a,5);
		cout<<"MaxWater"<<endl;
		ptr->output();
	return 0;
}
*/
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Eletricity{
	protected:
		int wkh;
	public:
		Eletricity(){
			wkh=0;
		}
		Eletricity(int k){
			wkh=k;
		}
		void input(){
			cout<<"Enter Wkh :";cin>>wkh;
		}
		void output(){
			cout<<payment()<<"\t";
		}		
		float payment(){
			float pay;
			if(wkh<=50) pay=wkh*450;
			else if(wkh <=100) pay=wkh*650;
			else if(wkh <=200) pay =wkh*720;
			else pay=wkh*850;
			return pay;
		}
		
};
class Water {
	protected:
		int vol;
		public:
			Water(){
				vol=0;
			}
			Water(int v){
				vol=v;
			}
		void input(){
			cout<<"Enter volit :";cin>>vol;
		}
		void output(){
			cout<<payment()<<endl;
		}
		
		float payment(){
			float pay;
			if(vol<=50) pay=vol*350;
			else if(vol <=100) pay=vol*750;
			else if(vol <=200) pay =vol*820;
			else pay=vol*950;
			return pay;
		}	
};
class Customer :public Eletricity ,public Water{
	private:
		char name[20];
		public:
		Customer() : Eletricity(), Water(){
			strcpy(name,"acb");
		}
		Customer(char *n,int w ,int v):
			Eletricity(w),Water(v){
			strcpy (name,n);
		}
		void input(){
			cout<<"Input Name :";cin.seekg(0,ios::end);cin.clear();cin.get(name,20);
			Eletricity::input();
			Water::input();
			
		}
		void output(){
			cout<<name<<"\t";
			Eletricity::output();
			Water::output();
		}
		float payment(){
			return Eletricity::payment()+Water::payment();
		}			
};
Customer *maxWater(Customer a[] ,int n){
	Customer *p;
	p=&a[0];
	for(int i=1;i<n;i++)
		if(p->Water::payment()<a[i].Water::payment()) p=&a[i];
		return p;
}
int main(){
	Customer *ptr,*a, p("Dara",123,809);int n;
	cout<<"Output All Customer :"<<endl;
	p.output();
	cout<<"Enter Number :";cin>>n;
	a=new Customer[n];
	cout<<"input data of student s1 :"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Enter Student :"<<(i+i)<<":"<<endl;
		a[i].input();
	}
	cout<<"Data of student s1 :"<<endl;
	for(int i=0;i<n;i++)
	a[i].output();

	getch();
}
