#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Worker{
	private:
		int id;
		char name[20];
		char sex;
	    float hour;
		static float rate;
	public:
		Worker(int i=123,char *n="OK",char s='M',float h=0){
			id=i;
			strcpy(name,n);
			sex=s;
			hour=h;
		}
		void input(){
			cout<<"Enter id   =";cin>>id;
			cout<<"Enter name =";cin.seekg(0,ios::end);cin.clear();cin.get(name,20);
			cout<<"Enter sex  =";cin>>sex;
			cout<<"Enter hour =";cin>>hour;
		}
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<hour<<endl;
		}
		 float income(){ return hour*rate; }
		 static float total(Worker a[],int n);
		 static float salary(Worker a[],int n);
};
float Worker::rate=4.5;
// total hour
float Worker::total(Worker a[],int n){
	float s;
	for(int i=0;i<n;i++){
		s=s+a[i].hour;
	}
	return s;
}
// total salary
float Worker::salary(Worker a[],int n){
	float s;
	for(int i=0;i<n;i++){
		s=s+a[i].income();
	}
	return s;
}
int main(){
	Worker *a;int n,i;float s;float totalSalary;
	cout<<"Numbers of workers :";cin>>n;
	a=new Worker[n];
	cout<<"Input all element of worker :"<<endl;
	for(i=0;i<n;i++){
		cout<<"Person "<<(i+1)<<":"<<endl;
		a[i].input();
	}
	cout<<"Output all element :"<<endl;
	for(i=0;i<n;i++){
		a[i].output();
	}
	s=Worker::total(a,n);
	cout<<"Total hour :"<<s<<endl;
	totalSalary=Worker::salary(a,n);
	cout<<"Total Salary :"<<totalSalary<<endl;
	getch();
}
