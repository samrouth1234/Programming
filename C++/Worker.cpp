#include<iostream>
#include<conio.h>
using namespace std;
class Worker{
	private:
		int id;
		char name[20];
		float hour;
		float salary=hour*(5);	
	public:
		void input(){
			cout<<"Enter id =";cin>>id;
			cout<<"Enter name =";cin.seekg(0,ios::end);cin.clear();cin.get(name,20);
			cout<<"Enter hour =";cin>>hour;
		}
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<hour<<"\t"<<hour*(5)<<endl;
		}
		static float total(Worker a[],int n);
		float getHour(){ return hour;}
};
float Worker::total(Worker a[],int n){
	float s=0;
	for(int i=0;i<n;i++)
		s=s+a[i].hour*(5);
		return s;	
}
Worker maxSalary(Worker a[],int n){
	Worker max=a[0];
	for(int i=1;i<n;i++){
		if(max.getHour()<a[i].getHour()) 
		max=a[i];
	}
	return max;
}
void sort(Worker a[],int n){
	Worker temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].getHour() < a[j].getHour()){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	Worker *x;int n;float s1;
	Worker max1;
	cout<<"Numbers of Person :";cin>>n;
	x=new Worker[n];
	cout<<"input data all Person :"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Employee :"<<(i+1)<<endl;
		x[i].input();
	}
	cout<<"Output data all Employee :"<<endl;
	for(int i=0;i<n;i++)
	x[i].output();
	s1=Worker::total(x,n);
	cout<<"Total salary ="<<s1<<endl;
	max1=maxSalary(x,n);
	cout<<"Maxiumm Salary of Employee :"<<endl;
	max1.output();
	sort(x,n);
	cout<<"Output Data After Sorting :"<<endl;
	for(int i=0;i<n;i++)
	x[i].output();
	getch();
}

