/*
#include<iostream>
#include<conio.h>
using namespace std;
 class Point{
 	private:
 		int x;
 		int y;
 	public:
 	void input()
	 {
 		cout<<"input x :";cin>>x;
 		cout<<"input y :";cin>>y;
	 }
	void output ()
	{
		cout<< "(" <<x <<","<<y<<")"<<endl;
	}
};
int main(){
	Point a,b;
	cout<<"input data of point a:"<<endl;
	a.input(); //function call
	cout<<"input data of point b:"<<endl;
	b.input(); //function call
	cout<<"Data of point a:";
	a.output(); //function call
	cout<<"Data of point b:";
	b.output();
	getch();
}
*/

// cteate class and object exercies distance between a and b
/*
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
 class Point{
 	private:
 		int x;
 		int y;
 	public:
 	void input()
	 {
 		cout<<"input x :";cin>>x;
 		cout<<"input y :";cin>>y;
	 }
	void output ()
	{
		cout<< "(" <<x <<","<<y<<")"<<endl;
	}
	float distance (Point p)
	{
		float d;
		d=sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
		return d;
	}
 };
int main(){
	Point a,b; float d1;
	cout<<"input data of point a:"<<endl;
	a.input(); //function call
	cout<<"input data of point b:"<<endl;
	b.input(); //function call
	cout<<"Data of point a:";
	a.output(); //function call
	cout<<"Data of point b:";
	b.output();
	d1=a.distance(b);
	cout<<"Distace from a to b is:"<<d1<<endl;
	getch();
}
*/
// how to Area of point (a,b,c)
/*
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
	class Point{
		private:
			int x;
			int y;
		public:
			void input (){
				cout<<"Input x :";cin>>x;
				cout<<"Input y :";cin>>y;
			}
			void output (){
				cout<<"("<<x<<","<<y<<")"<<endl;
			}
			float distance(Point p){
					float d;
					d=sqrt((x-p.x)*(x-p.x)+(y-p.y)*(y-p.y));
					return d;
			}
	};
int main(){
	Point a,b,c;float d1,d2,d3,s,p;
	cout<<"input data of point a:"<<endl;
	a.input();
	cout<<"input data of point b:"<<endl;
	b.input();
	cout<<"input data of point c:"<<endl;
	c.input();
	cout<<"Element of data a:";
	a.output();
	cout<<"Element of data b:";
	b.output();
	cout<<"Element of data c:";
	c.output();
	d1=a.distance(b);
	d2=a.distance(c);
	d3=b.distance(c);
	p=(d1+d2+d3)/2;					// recipe 
	s=sqrt(p*(p-d1)*(p-d2)*(p-d3)); // recipe Area
	cout<<"Area of traing is :"<<s<<endl;
	getch();
}
*/
// create class person in c++
/*

#include<iostream>
#include<conio.h>
using namespace std;
 class Person{
 	private:
 		int id,n;
 		char name[30];
 		char sex;
 		int age;
 	public:
 	void input()
	 {
	 	cout<<"input n :";cin>>n;
	 	for(int i=0;i<n;i++)
		 {
	 		cout<<"input id   :";cin>>id;
 			cout<<"input name :";
			cin.clear();
			cin.seekg(ios::end);
			cin.get(name,30);
 			cout<<"input sex  :";cin>>sex;
 			cout<<"input age  :";cin>>age;
		 }
 		
	 }
	void output ()
	{
		cout<<"ID"<<"\t"<<"Name"<<"\t"<<"Sex "<<"\t"<<"Age"<<"\t"<<endl;
		for(int i=0;i<n;i++)
			cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<age<<"\t";	
	}
};
int main(){
	Person a;
	cout<<"input element of a:"<<endl;
	a.input();
	cout<<"output element of a:"<<endl;
	a.output();
	getch();
}

*/
// how to area of rectangle 

/*

#include<iostream>
#include<conio.h>
using namespace std;
class Rectangle{
	private:
		float x;
		float y;
		public:
			void input(){
				cout<<"input x =";cin>>x;
				cout<<"input y =";cin>>y;
			}
			void output(){
				cout<<"Element x :"<<x<<endl;
				cout<<"Element y :"<<y<<endl;
			}
			void math(){
				float s;
				s=x*y;
				cout<<s;
			}
};
int main(){
	Rectangle a;float s;
	cout<<"input of data a:"<<endl;
	a.input();
	cout<<"output of data a:"<<endl;
	a.output();
	cout<<"Area of Rectangle :";
	a.math();
	getch();
}
*/
// volume in rectangle 

/*

#include<iostream>
#include<conio.h>
using namespace std;
class Rectangle{
	private:
		float x;
		float y;
		public:
			void input(){
				cout<<"input x =";cin>>x;
				cout<<"input y =";cin>>y;
			}
			void output(){
				cout<<"Element :"<<x<<endl;
				cout<<"Element :"<<y<<endl;
			}
			void multi(){
				float s;
				s=(x+y)*2;
				cout<<s;
			}		
};
int main(){
	Rectangle a;
	cout<<"input of data a :"<<endl;
	a.input();
	cout<<"output of data a:"<<endl;
	a.output();
	cout<<"Volume of Rectangle :";
	a.multi();
	getch();
}
*/
// solve 2sc degree equations  
/*
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
class Root{
	private:
		int a;
		int b;
		int c;
		public:
			void input(){
				cout<<"input a =";cin>>a;
				cout<<"input b =";cin>>b;
				cout<<"input c =";cin>>c;
			}
			void output(){
				cout<<"Element :"<<a<<endl;
				cout<<"Element :"<<b<<endl;
				cout<<"Element :"<<c<<endl;
		}
			void math(){ 
				int x1,x2,D;
				D=b*b-4*a*c;
				if(D<0){
					cout<<"Not root"<<endl;	
				}
				else {
					x1=(float)(-b+sqrt(D))/2*a;
					x2=(float)(-b-sqrt(D))/2*a;
					cout<<"x1 ="<<x1<<endl;
					cout<<"x2 ="<<x2<<endl;
				}
		}	
};
	
int main(){
	Root x;
	cout<<"input of data x:"<<endl;
	x.input();
	cout<<"output of data x:"<<endl;
	x.output();
	x.math();
	getch();
}

*/
// solve 1st degree equations 
/*
#include<iostream>
#include<conio.h>
using namespace std;
class Root{
	private:
		int a,b;
		public:
			void input(){
				cout<<"input a =";cin>>a;
				cout<<"input b =";cin>>b;
			}
			void output(){
				cout<<"Element a :"<<a<<endl;
				cout<<"Element b :"<<b<<endl;
			}
			void math(){
				int x;
				if(a==0){
					if(b==0)
						cout<<"Many roots"<<endl;
					else
						cout<<"Not roots"<<endl;
					}
				else
					x=(float)-b/a;
					cout<<"Element x :"<<x;		
			}
};
int main(){
	Root p;
	cout<<"input data of Root :"<<endl;
	p.input();
	cout<<"output data of Root :"<<endl;
	p.output();
	cout<<"Elemnt x :"<<endl;
	p.math();
	getch();
}
*/
// Area of rectangle in c++ used class and objects

#include<iostream>
#include<conio.h>
using namespace std;
class Rectangle{
	private:
		float Langth;
		float Width;
		public:
			void input(){
				cout<<"input Langth =";cin>>Langth;
				cout<<"input Width  =";cin>>Width;
			}
			void output(){
				cout<<Langth<<"\t"<<Width<<"\t"<<area()<<endl;
			}
			float area();		
};
float Rectangle::area(){
	return Langth*Width;
}
void inputAll(Rectangle a[],int n){
	for(int i=0;i<n;i++){
		cout<<"Rectangle "<<(i+1)<<":"<<endl;
		a[i].input();
	}	
}
void outputAll(Rectangle a[],int n){
	for(int i=0;i<n;i++)
	a[i].output();
}
float totalArea(Rectangle a[],int n){
	float s=0;
	for(int i=1;i<n;i++)
		s=s+a[i].area();
	return s;
}
Rectangle maxArea(Rectangle a[],int n){
	Rectangle t;
	t=a[0];
	for(int i=1;i<n;i++)
		if(t.area()<a[i].area()) t=a[i];
	return t;
}
void sort(Rectangle a[],int n){
	Rectangle temp;
	for(int i=0;i<n-1;i++)
	for(int j=i+1;j<n;j++)
		if(a[i].area()>a[j].area()){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
}
int main(){
	Rectangle p[100],max;
	int n;
	float total;
	cout<<"Number of Rectangles :";cin>>n;
	cout<<"Intput all Rectangles :"<<endl;
	inputAll(p,n);
	cout<<"Data of all Rectangles :"<<endl;
	outputAll(p,n);
	total=totalArea(p,n);
	cout<<"Total Area ="<<total<<endl;
	max=maxArea(p,n);
	cout<<"Max area Reactangle is :"<<endl;
	max.output();
	sort(p,n);
	cout<<"Data After Sorting :"<<endl;
	outputAll(p,n);
	getch();
}

// create class person in c++ programming
/*
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
			cout<<"Enter id   =";cin>>id;
			cout<<"Enter name =";cin.seekg(0,ios::end);cin.clear();cin.get(name,20);
			cout<<"Enter sex  =";cin>>sex;
			cout<<"Enter salary=";cin>>salary;	
		}
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<endl;
		}
		float getSalary(){return salary;}
};
void inputAll(Person a[],int n){
	for(int i=0;i<n;i++){
		cout<<"Person "<<(i+1)<<":"<<endl;
		a[i].input();
	}
}
void outputAll(Person a[],int n){
	for(int i=0;i<n;i++)
	a[i].output();
}
float totalSalary(Person a[],int n){
	float s=0;
	for(int i=0;i<n;i++)
	   s=s+a[i].getSalary();
	return s;
}
Person maxSalary(Person a[],int n){
	Person max;
	max=a[0];
	for(int i=1;i<n;i++)
		if(max.getSalary()<a[i].getSalary()) 
		max=a[i];
	return max;
}
void sort(Person a[],int n){
	Person temp;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i].getSalary() < a[j].getSalary()){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
}
int main(){
	Person p[100],max;int n;float total;
	cout<<"Number of Persons :";cin>>n;
	cout<<"input all persons :"<<endl;
	inputAll(p,n);
	cout<<"output all person :"<<endl;
	outputAll(p,n);
	total=totalSalary(p,n);
	cout<<"Total all Salary  :"<<total<<endl;
	max=maxSalary(p,n);
	cout<<"Maximum of Salary :"<<endl;
	max.output();
	sort(p,n);
	cout<<"output data After Sorting :"<<endl;
	outputAll(p,n);
	getch();	
}
*/
// careate class and objcets in c++ 
// Employee 
/*
#include<iostream>
#include<conio.h>
using namespace std;
class Employee{
	private:
		int id;
		char name[20];
		char sex;
		float salary;
	public:
		void input(){
			cout<<"input id     =";cin>>id;
			cout<<"input name   =";cin.seekg(0,ios::end);cin.clear();cin.get(name,20);
			cout<<"input sex    =";cin>>sex;
			cout<<"input salary =";cin>>salary;
		}
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<endl;
		}
		float getSalary(){return salary;	}
		int getId(){return id;}
};
void inputAll(Employee a[],int n){
	for(int i=0;i<n;i++){
		cout<<"Employee"<<(i+1)<<":"<<endl;
		a[i].input();
	}
}
void outputAll(Employee a[],int n){
	for(int i=0;i<n;i++)
		a[i].output();
}
float totalSalary(Employee a[],int n){
	float s=0;
	for(int i=1;i<n;i++){
		s=s+a[i].getSalary();
	}
	return s;
}
Employee maxSalary(Employee a[],int n){
	Employee max;
	max=a[0];
	for(int i=1;i<n;i++)
		if(max.getSalary()<a[i].getSalary())
		max=a[i];
	return max;
}
void sort(Employee a[],int n){
	Employee temp;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
		if(a[i].getSalary()<a[j].getSalary()){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
}
void search(Employee a[],int n){
	int searchId;int k=0;
	cout<<"Enter ID to Search :";cin>>searchId;
	for(int i=0;i<n;i++){
		if(a[i].getId()==searchId){
			a[i].output();
			break;
		}	
	}
	if(searchId==0){
		cout<<"Search not fount ....!"<<endl;
	}
}
void deleted(Employee a[],int n){
	int deletedId;int k=0;
	cout<<"Enter id Deleted :";cin>>deletedId;
	for(int i=0;i<n;i++){
		if(a[i].getId()==deletedId){
			for(int j=i;j<n-1;j++)
			a[j]=a[j+1];
			k=1;
			i--;
			n--;
			break;
		}
	}
	if(k==0){
		cout<<"Deleted ID Without Elemetn...!"<<endl;
	}
}
int main(){
	Employee p[100],max;int n;float sum;
	cout<<"input element of Employee :";
	cin>>n;
	cout<<"input data  of Employee :"<<endl;
	inputAll(p,n);
	cout<<"output data of Employee :"<<endl;
	outputAll(p,n);
	sum=totalSalary(p,n);
	cout<<"Sum All Salary Employee :"<<sum <<endl;
	max=maxSalary(p,n);
	cout<<"Mixiumm Salary Employee :"<<endl;
	max.output();
	sort(p,n);
	cout<<"Output Employee After Sorting :"<<endl;
	outputAll(p,n);
	search(p,n);
	deleted(p,n);
	cout<<"Output Employee After Deleted :"<<endl;
	outputAll(p,n);
	getch();
}
*/
// create construtor in class and objects
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
		// Default construtor
		Person(){ 
			id=1234;
			strcpy(name,"No");
			sex='M';
			salary=980;
		}
		// Construtor with parameter
		Person(int i,char *n,char s,float sa){
			id=i;
			strcpy(name,n);
			sex=s;
			salary=sa;
		}
		// Copy Construtor
		Person(Person &p){
			id=p.id;
			strcpy(name,p.name);
			sex=p.sex;
			salary=p.salary;
		}
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<endl;
		}
};
int main(){
	Person p1,p2(1234,"Rana",'M',890),p3(p2);
	cout<<"Output Default Construtor :"<<endl;
	p1.output();
	cout<<"Output Construtor Whit parameter :"<<endl;
	p2.output();
	cout<<"Output Copy Construtor :"<<endl;
	p3.output();
	getch();
}
*/
// create construtor with parameter
/*
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Person{
	private:
		int id;
		char name[30];
		char sex;
		float salary;
	public:
		// create Default Construtor and Construtor with Parameter 
		Person(int i=123,char *n="bich samrouth",char s='M',float sa=987){
			id=i;
			strcpy(name,n);
			sex=s;
			salary=sa;
		}
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<endl;
		}
};
int main(){
	Person p,p1(12345,"Raka",'F',789);
	cout<<"Output Default Construtor :"<<endl;
	p.output();
	cout<<"Output Construtor with Parameter :"<<endl;
	p1.output();
	getch();
}
*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
class Integer{
	private:
		int x;
		int y;
	public:
		Integer(){
			x=34;
			y=40;
		}
	void output(){
		cout<<x<<"\t"<<y<<endl;
	}
};
int main(){
	Integer a;
	cout<<"Output Number x and y :"<<endl;
	a.output();
	getch();
}
*/
/*
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Product{
	private:
		int code;
		char name[20];
		float price;
		int qty;
	public:
		Product(){
			code=1234;
			strcpy(name,"Coke");
			price=400;
			qty=2;	
		}
		Product(int c,char *n,float p,int q){
			code=c;
			strcpy(name,n);
			price=p;
			qty=q;
		}
		void output(){
			cout<<code<<"\t"<<name<<"\t"<<price<<"\t"<<qty<<endl;
		}
		float totalPrice(){return price*qty;}
		float getPrice(){return price;	}
};
void outputAll(Product a[],int n){
	for(int i=0;i<n;i++){
		a[i].output();
	}
}
float totalPrice(Product a[],int n){
	float sum=0;
	for(int i=1;i<n;i++){
		sum=sum+a[i].totalPrice();
	}
	return sum;
}
Product maxPrice(Product a[],int n){
	Product max;
	max=a[0];
	for(int i=1;i<n;i++){
		if(max.getPrice()<a[i].getPrice()){
			max=a[i];
		}	
	}	
	return max;
}
void sort(Product a[],int n){
	Product temp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[i].getPrice()< a[j].getPrice()){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main(){
	Product a[10]={
		Product(1, "Product Coke", 10, 5),
        Product(2, "Product Food", 50, 10),
        Product(3, "Product Feer", 25, 20),
        Product(4, "Product Cat",  75, 3),
        Product(5, "Product Car",  150,2),
        Product(6, "Product Dog",  120,5),
        Product(7, "Product Tool", 40, 8),
        Product(8, "Product Chat", 60, 6),
        Product(9, "Product iphon",30, 15),
        Product(10,"Product Compu",80, 4)
		};
	Product max;
	float sum;
	cout<<"Output All Element :"<<endl;
	outputAll(a,10);
	sum=totalPrice(a,10);
	cout<<"Sum All Element :"<<sum<<endl;
	max=maxPrice(a,10);
	cout<<"Maximum of Product :"<<endl;
	max.output();
	sort(a,10);
	cout<<"Output All Element After Sorting :"<<endl;
	outputAll(a,10);
	return 0;
	getch();
}
*/
// create construtor three 
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
	public :
		Person(){
			id=1233;
			strcpy(name,"bich");
			sex='M';
			salary=900;
		}
		Person(int i,char *n,char s,float sa ){
			id=i;
			strcpy(name,n);
			sex=s;
			salary=sa;
		}
		Person(Person &p){
			id=p.id;
			strcpy(name,p.name);
			sex=p.sex;
			salary=p.salary;
		}
		void output (){
			cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<endl;
		}
};
int main(){
	Person p1,p2(1327,"Samrouth",'M',800),p3(p1);
	cout<<"output Defult Construtor "<<endl;
	p1.output();
	cout<<"output Defult Construtor "<<endl;
	p2.output();
	cout<<"output Construtor with parameter "<<endl;
	p3.output();
	getch();
}
*/
// construtor outer class 
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
		void output();
};
Person::Person(){
	id=1234;
	strcpy(name,"samrouth");
	sex='M';
	salary=700;
}
Person::Person(int i,char *n,char s,float sa){
	id=i;
	strcpy(name,n);
	sex=s;
	salary=sa;
}
Person::Person( Person &p){
	id=p.id;
	strcpy(name,p.name);
	sex=p.sex;
	salary=p.salary;
}
void Person::output(){
	cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<endl;
}
int main(){
	Person p1,p2(1327,"bich Samrouth",'M',800),p3(p2);
	cout<<"output Defult Construtor "<<endl;
	p1.output();
	cout<<"output Defult Construtor "<<endl;
	p2.output();
	cout<<"output Construtor with parameter "<<endl;
	p3.output();
	getch();
}
*/
// outter constructor 
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
		void output();
		
};
Person::Person(){
			id=123;
			strcpy(name,"Ok");
			sex='M';
			salary=900;
		}
Person::Person(int i,char *n,char s,float sa){
			id=i;
			strcpy(name,n);
			sex=s;
			salary=sa;
		}
Person::Person( Person &p){
	id=p.id;
	strcpy(name,p.name);
	sex=p.sex;
	salary=p.salary;
}
void Person::output(){
			cout<<id<<"\t"<<name<<"\t"<<sex<<"\t"<<salary<<"\t"<<endl;
	}
int main(){
	Person *p,obj(1234,"Mara",'M',900);
	cout<<"Output Default of Construtor :"<<endl;
	obj.output();
	cout<<"Output Construtor With Parameter :"<<endl;
//	cout<<"Output Copy of Construtor :"<<endl;
//	p3.output();
	getch();	
}
*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
class Numbers{
	private:
		int pgcd;
		int ppcm;
	public:
		void input(){
			cout<<"Enter pgcd =";cin>>pgcd;
			cout<<"Enter ppcm =";cin>>ppcm;
		}
		void output(){
			cout<<"==>Numbers of pgcd ="<<pgcd<<endl;
			cout<<"==>Numbers of ppcm ="<<ppcm<<endl;
		}		
};
int main(){
	Numbers p;
	cout<<"input Numbers of pgcd :"<<endl;
	p.input();
	cout<<"Output Numbers of pgcd :"<<endl;
	p.output();
	getch();
}
*/
