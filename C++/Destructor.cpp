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
			id=123;
			strcpy(name,"ok");
			sex='M';
			salary=800;
		}
		Person(int i,char *n,char s,float sa){
			this->id=i;
			strcpy(this->name,n);
			this->sex=s;
			this->salary=sa;
		}
		void input(){
			cout<<"Input id =";cin>>id;
			cout<<"Input name =";cin.seekg(0,ios::end);cin.clear();cin.get(name,20);
			cout<<"Input sex =";cin>>sex;
			cout<<"Input salary =";cin>>salary;
		}
		void output(){
			cout<<this->id<<"\t"<<this->name<<"\t"<<this->salary<<endl;
		}
		// create destructor 
		~Person(){
			cout<<"Name :"<< name <<" Address "<<this<<"Was delete :"<<endl;
		}
};
int main(){
	Person p1[6]={Person(1,"Mary",'M',890),Person(2,"Mary",'M',890),
				  Person(3,"Mary",'M',890),Person(4,"Mary",'M',890),
				  Person(5,"Mary",'M',890),Person(6,"Mary",'M',890)
				  };
	Person *a;
//	p2=new Person(2,"Mic",'F',900);
	a=new Person[6];
	cout<<"=================== INFORMATION ==================="<<endl;
	cout<<"input data 3 Person :"<<endl;
	for(int i=0;i<7;i++){
		cout<<"Person "<<(i+1)<<":"<<endl;
		a[i].input();
	}
	cout<<"Output data of p1 :"<<endl;
	for(int i=0;i<7;i++){
		a[i].output();	
	}
//	cout<<"Output data of p2 :"<<endl;
//	p2->output();
	// destructor p2
//	delete p2;
	// destructor person all when input from keyword
//	delete [] a;
	getch();
}
