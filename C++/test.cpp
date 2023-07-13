/*
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class Product {
private:
    int code;
    char name[20];
    float price;
    int qty;
public:
    Product() {
        code=1234;
        strcpy(name,"Coke");
        price=400;
        qty=2;
    }
    Product(int c, char* n, float p, int q) {
        code = c;
        strcpy(name, n);
        price = p;
        qty = q;
    }
    
    void output() {
        cout<<code<<"\t"<<name<<"\t"<<price<<"\t"<<qty<<endl;
    }
    
    float totalPrice(){
        return price * qty;
    }
    
    float getPrice(){
        return price;
    }
};

void outputAll(Product a[],int n) {
    for (int i = 0; i<n; i++) {
        a[i].output();
    }
}

float total(Product a[], int n) {
    float sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i].totalPrice();
    }
    return sum;
}

Product maxPrice(Product a[], int n) {
    Product max = a[0];
    for (int i = 1; i < n; i++) {
        if (max.getPrice() < a[i].getPrice()) 
        {
            max = a[i];
        }
    }
    return max;
}

void sort(Product a[],int n){
    Product temp;
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(a[i].getPrice()<a[j].getPrice()) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    Product a[10] = {
        Product(1, "Product Coke", 10, 5),
        Product(2, "Product Food", 50, 10),
        Product(3, "Product Feer", 25, 20),
        Product(4, "Product Cat",  75, 3),
        Product(5, "Product Car",  150, 2),
        Product(6, "Product Dog",  120, 1),
        Product(7, "Product Tool", 40, 8),
        Product(8, "Product Chat", 60, 6),
        Product(9, "Product iphone",30, 15),
        Product(10,"Product Compu",80, 4)
    };  
    cout << "Output All Products :" << endl;
    outputAll(a, 10);
    cout << "Total Price: " << total(a, 10) << endl;
    Product max = maxPrice(a, 10);
    cout << "Product with the highest price:\n";
    max.output();
    sort(a, 10); // Sort by price
    cout << "Products sorted by price:\n";
    outputAll(a, 10);
    getch();
}
*/
// create program about static

/*
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Worker{
  private:
    int id;
    char name [20];
    float hour;
    static float rate;
  public:
    Worker(int i=123,char *n="No",float h=0)
    {
      id=i;
      strcpy(name,n);
      hour=h;
    }
    void input()
    {
      cout<<"Enter ID   : ";cin>>id;
      cout<<"Enter Name : ";cin.seekg(0,ios::end);cin.clear();
      cin.get(name,20);
      cout<<"Enter Hour : ";cin>>hour;
    }
    void output()
    {
      cout<<id<<"\t"<<name<<"\t"<<hour<<endl;
    }
    float income()
    {
      return hour * rate;
    }
    static float total (Worker a[], int n);
    friend void sort (Worker a[],int n);
};
float Worker::rate = 4.5;
float Worker::total(Worker a[],int n) 
{
  float s=0;
  for(int i=0;i<n;i++)
  {
    s=s+a[i].hour;
  }
  return s;
}
void sort(Worker a[],int n){
  Worker temp;
  for(int i=0;i<n-1;i++)
  {
    for(int j=i+1;j<n;j++){
      if(strcmpi(a[i].name,a[j].name)<0)
      {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }  
}
int main(){
  Worker *a;int i,n;float s;
  cout<<"Number of Worker : ";cin>>n;
  a=new Worker[n];
  cout<<"Input data of All worker : "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<"Worker "<<(i+1)<<"\3:"<<endl;
    a[i].input();
  }
  cout<<"Output data of All worker : "<<endl;
  for(int i=0;i<n;i++)
  {
    a[i].output();
  }
  s=Worker::total(a,n);
  cout<<"Total Hour : "<<s<<endl;
  sort(a,n);
  cout<<"Output Data After Sorting : "<<endl;
  for(int i=0;i<n;i++)
  a[i].output();
  getch();
}
*/
/*
#include<iostream>
#include<conio.h>
using namespace std;
void input(int x[],int n){
	for(int i=0;i<n;i++){
		cout<<"Number "<<(i+1)<<":"<<endl;
		cin>>x[i];
	}
}
void output(int x[],int n){
	for(int i=0;i<n;i++)
	cout<<x[i]<<"\t";
}
float max(int x[],int n){
	int max=x[0];
	for(int i=0;i<n;i++)
	if(max<x[i])max=x[i];
	return max;
}
void sort(int x[],int n){
	int temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(x[i]<x[j]){
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}	
}
void search(int x[],int n){
	int num;int k=0;
	cout<<"Enter number to search :";cin>>num;
	for(int i=0;i<n;i++){
		if(x[i]==num){
			k=k+1;
			cout<<x[i]<<endl;
			break;
		}			cout<<"Search not found :";
		}
	}
}
int main(){
	int a[40];int n;int max1;
	cout<<"Enter n =";cin>>n;
	cout<<"input of element :"<<endl;
	input(a,n);
	cout<<"output of element :"<<endl;
	output(a,n);
	cout<<endl;
	max1=max(a,n);
	cout<<"Maximum of Number : "<<max1<<endl;
	sort(a,n);
	cout<<"Output all element After sorting :"<<endl;
	output(a,n);
	cout<<endl;
	search(a,n);
	getch();
}
*/

// inheritace 3 class

#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Person{
	protected:
		int id;
		char name[20];
		char gender;
	public:
		Person(){
			id=1;
			strcpy(name,"abc");
			gender='M';
		}
		Person(int i,char *n,char ge){
			id=i;
			strcpy(name,n);
			gender=ge;
		}
		void input(){
			cout<<"ID :"<<endl;cin>>id;
			cout<<"Name :"<<endl;cin.seekg(0,ios::end);cin.clear();cin.get(name,20);
			cout<<"Gender :"<<endl;cin>>gender;
		}
		void output(){
			cout<<id<<"\t"<<name<<"\t"<<gender<<endl;
		}
};
class Acamic{
	protected:
		char university[20];
		int year;
	public:
		Acamic(){
			strcpy(university,"RUPP");
			year=2;
		} 
		Acamic(char *un,int y){
			strcpy(university,un);
			year=y;
		}
		void input(){
			cout<<"University :"<<endl;cin.seekg(0,ios::end);cin.clear();cin.get(university,20);
			cout<<"Year :"<<endl;cin>>year;
		}
};
class Student : public Person,public Acamic{
	private:
		float scorec;
	public:
		Student():Person(),Acamic(){
			scorec=0;
		}
		
};
int main(){
	Person p(1,"Dara",'M');
	cout<<"Person 1"<<endl;
	p.output();
	getch();
}

