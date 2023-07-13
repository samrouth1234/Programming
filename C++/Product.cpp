#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Product{
	private:
		int code;
		char name[20];
		float price;
	public:
		Product(int c=123,char *n="abc",float p=500){
			code=c;
			strcpy(name,n);
			price=p;
		}
		void input(){
			cout<<"==>Enter code :";cin>>code;
			cout<<"==>Enter name :";cin.seekg(0,ios::end);cin.clear();cin.get(name,20);
			cout<<"==>Enter price :";cin>>price;
		}
		void output(){
			cout<<" Code :"<<this->code<<"\t"<<"Name :"<<this->name<<"\t"<<"Price :"<<this->price<<endl;
		}
		float getPrice(){ return price;}
		/*
		~Product(){
			cout<<"Name :"<<name<<"\t"<<"address :"<<this<<"was deleted :"<<endl;
		}
		*/
};
float totalPrice(Product a[],int n){
	float s=0;
	for(int i=0;i<n;i++)
	   s=+a[i].getPrice();
	return s;
}
Product *maxPrice(Product a[],int n){
	Product *p=&a[0];
	for(int i=1;i<n;i++){
		if(p->getPrice()<a[i].getPrice()) p=&a[i];
	}
	return p;
}
void sort(Product a[],int n){
	Product temp;
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(a[i].getPrice() < a[j].getPrice()){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
}
int main(){
	Product *a,*ptr;
	int n,i;
	float total;
	cout<<"Numbers of Product :";cin>>n;
	a=new Product[n];
	cout<<"input all Product :"<<endl;
	for(int i=0;i<n;i++){
		cout<<"Product "<<(i+1)<<endl;
		a[i].input();
	}
	cout<<"output all Product :"<<endl;
	for(int i=0;i<n;i++)
	a[i].output();
	total=totalPrice(a,n);
	cout<<"Total all Price  :"<<total<<endl;
	ptr=maxPrice(a,n);
	cout<<"Max price of product is :"<<endl;
	ptr->output();
	// sorting
	sort(a,n);
	cout<<"Output Product After Sorting :"<<endl;
	for(int i=0;i<n;i++)
	a[i].output();
	getch();
}
