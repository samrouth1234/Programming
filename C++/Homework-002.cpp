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
		Product(int c=123,char *n="acb",float p=0){
			code=c;
			strcpy(name,n);
			price=p;
		} 
		friend ostream & operator <<(ostream &output ,Product &p){
			output<<p.code<<"\t"<<p.name<<"\t"<<p.price<<endl;
		return output;	
		}
		friend istream & operator >>(istream &input ,Product &p){
			cout<<"Code :";input>>p.code;
			cout<<"Name :";input.seekg(0,ios::end);input.clear();input>>p.name;
			cout<<"Price :";input>>p.price;
		return input;	
		}
		int operator > (Product p){
			return price > p.price;
		}
		// float sum objcet
		float operator +(float x){
			float s;
			s=price+x;
			return s;
		}
};
float total(Product a[],int n){
	float s=0;
	for(int i=0;i<n;i++){
		s=a[i]+s;
	}
	return s;
}
void sort(Product a[],int n){
	Product temp;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	
}
void inputAll(Product a[],int n){
	for(int i=0;i<n;i++){
		cout<<"Product :"<<(i+1)<<endl;
		cin>>a[i];
	}
}
void outputAll(Product a[],int n){
	for(int i=0;i<n;i++){
		cout<<a[i];
	}
}
int main(){
	Product a[100];int n;float s;
	cout<<"Number of products:";cin>>n;
	cout<<"input all products:"<<endl;
	inputAll(a,n);
	cout<<"Output all products:"<<endl;
	outputAll(a,n);
	s=total(a,n);
	cout<<"Total price ="<<s<<endl;
	sort(a,n);
	cout<<"After Sorting :"<<endl;
	outputAll(a,n);
	getch();
}
