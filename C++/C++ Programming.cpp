
 // output data
/*
#include<iostream>
using namespace std;
int main(){
	cout<<"Hello world!"<<endl;
	cout<<"i'm bich samrouth";
	return 0;
}
*/
//input data
/*
#include <iostream>
using namespace std;

int main() {
  int x, y;
  int sum;
  cout << "Type a number: ";
  cin >> x;
  cout << "Type another number: ";
  cin >> y;
  sum = x + y;
  cout << "Sum is: " << sum;
  return 0;
}
// input nummber
*/
/*
#include<iostream>
using namespace std;
int main(){
	int x,y;
	int sum;
	cout<<"Enter x=";
	cin>>x;
	cout<<"Enter y=";
	cin>>y;
	sum=x+y;
	cout<<"Sum is:"<<sum;
	return 0;
}
*/
//used for loop
/*
#include<iostream>
using namespace std;
int main(){
	for(int i = 0; i < 6 ; i++){
		cout<< i <<"\n";
	}
	return 0;
}
*/
// maximunm in c++
/*
#include<iostream>
using namespace std;
int main(){
	int a,b,max;
	cout<<"Enter a=";
	cin>>a;
	cout<<"Enter b=";
	cin>>b;
	
	/
	if(a>b)
		max=a;
	else
		max=b;
	/
	// Alternative in c++ (Short Hand If Else)
	
//	max=(a>b)? a:b;

	// 0r
	
	(a>b)?max=a:max=b;
	
	cout<<"Maximun (a and b):"<<max;
	return 0;
}
*/
// minimun(a,b) in c++
/*
#include<iostream>
using namespace std;
int main(){
	int a,b,min;
	cout<<"Enter a=";
	cin>>a;
	cout<<"Enter b=";
	cin>>b;
		
	if(a>b)
		min=b;
	else
		min=a;

	// Alternative in c++ (Short Hand If Else)
	
//	min=(a<b)? a:b;

	// 0r
	
//	(a<b)?min=a:min=b;
	
	cout<<"Minimun (a and b):"<<min;
	return 0;
}
*/
// minimum three number
/*
#include<iostream>
using namespace std;
int main(){
	int a,b,c,max;
	cout<<"Enter a=";
	cin>>a;
	cout<<"Enter b=";
	cin>>b;
	cout<<"Enter c=";
	cin>>c;
	max=( a >((b > c) ? a:( b < c )) ? b:c);
	cout<<"Maximun (a b and c):"<<max;
	return 0;
}
*/
// used Operators in c++ programming
/*
#include<iostream>
using namespace std;
int main(){
	int a=10,b=5,c=15;
	int sum=a+b;
	int subtration=a-b+c;
	int Div=a/b;
	int Modulus=a%c;
	cout<<"=========style1========="<<endl;
	cout<<"a = "<< a <<endl;
	cout<<"b = "<< b <<endl;
	cout<<"c = "<< c <<endl;
	cout<<"a+b= "<< a+b <<endl;
	cout<<"a+b+c= "<< a+b+c <<endl;
	cout<<"a-b= "<< a-b <<endl;
	cout<<"a-b-c="<< a-b-c <<endl;
	cout<<"a*b*c= "<< a*b*c <<endl;
	cout<<"a%b= "<< a%b << endl;
	cout<<"a/b= "<< a/b << endl;
	cout<<"=========style2========="<<endl;
	cout<<"sum = "<< sum <<endl;
	cout<<"subtration ="<<subtration<<endl;
	cout<<"Div=" << Div <<endl;
	cout<<"Modulus="<<Modulus<<endl;
	
	return 0;
}
*/
// length string in c++ programming
/*

#include<iostream>
#include<string>
using namespace std;
int main(){
	string mystring="Hello";
	string txt="Hello world!";
	cout<<mystring <<endl;// output string 
	cout<<"This is langth of mystring :"<<mystring.length()<<endl;//length fo string used keyword length()
	cout<<"This is size of txt string :"<<txt.size(); //size of string uses keyword size()
	return 0;
}

*/
// user input string
/*
#include<iostream>
#include<string>
using namespace std;
int main(){
	string fullname;
	cout<<"Enter name:";
	getline(cin,fullname);
	cout<<"Your name is:"<<fullname;
	return 0;
}
*/
// omitting namespace
/*
#include<iostream>
#include<string>
int main(){
	std::string tex="Hello world!";
	std::cout<<tex;
	return 0;
}
*/
// input array in c++
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,n;
	int id;
	char name[20];
	float scorce;
	cout<<"=========== input name student ==========="<<endl;
	cout<<"Enter n =";cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter id :";
		cin>>id;
		cout<<"Enter name :";
		cin.clear();
		cin.seekg(ios::end);
		cin.get(name,20);
		cout<<"Enter scorce :";
		cin>>scorce;
		
	}
	cout<<"===========output name student=========== "<<endl;
	for(i=0;i<n;i++)
	{
		cout<<"Id ="<< id <<endl;
		cout<<"Name="<< name <<endl;
		cout<<"Scorce="<< scorce <<endl; 
	}
	
	getch();
}
*/
// used switch in c++ 
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int day=6;
	switch (day) {
		case 1:
    		cout << "Today is Monday";
    		break;
    	case 2:
    		cout << "Today is Tuesday";
    		break;
    	case 3:
    		cout << "Today is Wedesday";
    		break;
    	case 4:
    		cout << "Today is Thurday";
    		break;
    	case 5:
    		cout << "Today is Friday";
    		break;
  		case 6:
    		cout << "Today is Saturday";
    		break;
 		 case 7:
    		cout << "Today is Sunday";
    		break;
  	default:
    	cout << "Looking forward to the Weekend";
}
	getch();
}
*/
// Program to build a simple calculator using switch Statement
/*
#include <iostream>
using namespace std;

int main() {
    char oper;
    int num1, num2;
    cout << "Enter an operator (+, -, *, /, % ): ";
    cin >> oper;
    cout << "Enter num1=";
    cin >> num1 ;
    cout<<"Enter num2=";
    cin>>num2;
    switch (oper) {
        case '+':
            cout << num1 << " + " << num2 << " = " << num1 + num2;
            break;
        case '-':
            cout << num1 << " - " << num2 << " = " << num1 - num2;
            break;
        case '*':
            cout << num1 << " * " << num2 << " = " << num1 * num2;
            break;
        case '/':
            cout << num1 << " / " << num2 << " = " << num1 / num2;
            break;
        case '%':
            cout << num1 << " % " << num2 << " = " << num1 % num2;
            break;
        default:
            // operator is doesn't match any case constant (+, -, *, / ,%)
            cout << "Error! The operator is not correct";
            break;
    }

    return 0;
}
*/
// used switch in c++
/*
#include<iostream>
using namespace std;
int main(){
	char month;
	cout<<"Enter deta:";
	cin>>month;
	switch(month){
		case 'J':
			cout<<"30/January/2023";
			break;
		case 'F':
			cout<<"28/February/2023";
			break;
		case 'M':
			cout<<"30/March/2023";
			break;
		case 'A':
			cout<<"30/April/2023";
			break;
		default :
			cout<<"Error!Enter month !";
	}
	return 0;
}
*/
// used while loop Eg:(1+2+3+...+n)
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,n,sum;
	cout<<"Enter n=";
	cin>>n;
	sum=0;
	i=1;
	while(i<=n){
		sum=sum+i;
		i++;
	}
	cout<<"sum = "<<sum;
	getch();
}
*/
// do loop in c++ Eg:(1+2+3+...+n)
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,n,sum;
	cout<<"Enter n=";
	cin>>n;
	sum=0;
	i=1;
	do{
		sum=sum+i;
		i++;
	}while(i<=n);
	cout<<"sum = "<<sum;
	
	getch();
}
*/
//used for loop Eg:1+2+3+...+n
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,n,sum;
	cout<<"Enter n=";
	cin>>n;
	sum=0;
	for(i=1;i<=n;i++)
	sum=sum+i;
	cout<<"sum = "<<sum;
	
	getch();
}
*/
// sum odd integer sum=(1+3+5+....+n)
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,n,s;
	cout<<"Enter n=";cin>>n;
	s=0;
	for(i=1;i<=n;i++){
		if((i%2)!=0){
			s=s+i;
		}
	}
	cout<<"Sum of odd integers :"<<s;
	getch();
}
*/
// sum of sumber (sum=2+4+6+...+n)
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,n,sum;
	cout<<"Output n=";cin>>n;
	sum=0;
	for(i=2;i<=n;i+=2){
		sum=sum+i;
	}
	cout<<"sum of number="<<sum;
	getch();
}
*/
// used lable goto in c++
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,n,sum;
	cout<<"input n=";cin>>n;
	sum=0;i=1;
	sum:
		sum=sum+i;
		i++;
	if(i<=n) goto sum;
	cout<<"sum="<<sum<<endl;
	getch();
}
*/

// used goto again in c++
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,n,sum;
	char ch;
	again:
		cout<<"input n=";
		cin>>n;
		sum=0;i=1;
		sum:
			sum=sum+i;
			i++;
		if(i<=n) goto sum;
		cout<<"sum="<<sum<<endl;
		cout<<"Press y to continue:"; cin>>ch;
		if(ch=='y'||'Y') goto again;
	getch();
}
*/
// used loop output number 100->1
/*
#include<iostream>
#include<conio.h>
using namespace std ;
int main(){
	int i;
	for(i=100;i>=1;i--)
	cout<<i<<endl;
	getch();
}
*/
// used loop output number 1->100
/*
#include<iostream>
#include<conio.h>
using namespace std ;
int main(){
	int i;
	for(i=1;i<=100;i++)
	cout<<i<<endl;
	getch();
}
*/
// used while loop 
// 100->1
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i;
	i=100;
	while(i>=1){
		cout<<i <<"\t";
		i--;
	}
	getch();
}
*/
// 1-->100
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i;
	i=1;
	while(i<100){
		cout<<i <<"\t";
		i++;
	}
	getch();
}
*/
// sort element in c++
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,j,n;
	int temp;
	int aray[5]={1,3,4,5,7};
	cout<<"output element before sort:";
	for(i=0;i<5;i++){
		cout<< aray[i]<<"\t";
	}
	cout<<endl;
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(aray[j]<aray[i]){
				
				temp=aray[i];
				aray[i]=aray[j];
				temp=aray[j];
				
			}
		}
	}
	cout<<"output Element After sort:";
	for(i=0;i<5;i++)
	cout<< aray[i]<<"\t";
	getch();
}
*/
// sort Arary in c++
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int i,j,n;
	int temp;
	int aray[20];
	cout<<"Enter n=";cin>>n;
	for(i=0;i<n;i++){
		cout<<"Enter aray=";
		cin>>aray[i];
	}
	cout<<"output element before sort:"<<endl;
	for(i=0;i<n;i++){
		cout<< aray[i]<<"\t";
	}
	cout<<endl;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			// sort element A -> a
			if(aray[j]>aray[i]){
				
				temp=aray[i];
				aray[i]=aray[j];
				aray[j]=temp;
				
			}
		}
	}
	cout<<"output Element After sort:"<<endl;
	for(i=0;i<n;i++)
	cout<< aray[i]<<"\t";
	getch();
}
*/
// search array in c++
/*
#include<iostream>
using namespace std;
int main()
{
    int n,k,ans=-1;
    int arr[n];
    cout<<"Enter n=";
    cin>>n;
    cout<<"Enter elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter element to be searched"<<endl;
    cin>>k;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            ans=i;
            break;
        }
    }
    if(ans!=-1)
    cout<<"The element "<<k<<" is present at index "<<ans;
    else
    cout<<"The element "<<k<<" is not there in the array";
    return 0;
}
*/
/*
// how to used do loop whith switch

#include<iostream>
using namespace std;
int main(){
	system("clear");
	int operation;
	int id[100];
	int i,n=0,idSearch,isSearch,j,temp;
	string name[100];
	string sex[100];
	double salary[100];
	do{
		cout<<" 1 Input element of employee:"<<endl;
		cout<<" 2 Output element of employee:"<<endl;
		cout<<" 3 Search id element of employee:"<<endl;
		cout<<" 4 Sort element of employee:"<<endl;		
		cout<<" 5 Exit "<<endl;
		cout<<"Input your chioce:";cin>>operation;
		switch(operation){
			case 1:
					cout<<"=======Input Element======="<<endl;
					cout<<"Input id=";cin>>id[n];
					cout<<"Input name=";cin>>name[n]; //cin>>name
					cout<<"Input sex=";cin>>sex[n];
					cout<<"Input salary=";cin>>salary[n];
					n++;
				break;
			case 2:	
					cout<<"=======Output Element======="<<endl;
					for(i=0;i<n;i++){
						cout<< id[i] <<"\t";
						cout<< name[i] <<"\t";
						cout<< sex[i] <<"\t";
						cout<< salary[i] <<endl;	
					}
			 	break;
			case 3:
					cout<<"=======Output Element======="<<endl;
					cout<<" Enter name to search:";cin>>idSearch;
					isSearch=0;
					for(i=0;i<n;i++){
						if(idSearch==id[i]){
							cout<<"=======Search Found======="<<endl;
							cout<< id[i] <<"\t";
							cout<< name[i] <<"\t";
							cout<< sex[i] <<"\t";
							cout<< salary[i] <<endl;
							isSearch=1; //seen element 
							break;
						}
					}
					if(isSearch==0){
						cout<<idSearch<<"Search not found"<<endl;
					}
			 	break;
			case 4:		
					for(i=0;i<n;i++){
						for(j=i+1;j<n;j++){
							// sort element A -> a
							if(id[i]<id[j]){
							temp=id[i];
							id[i]=id[j];
							id[j]=temp;	
							}
						}
					}
					for(i=0;i<n;i++){
						cout<< id[i] <<"\t";
						cout<< name[i] <<"\t";
						cout<< sex[i] <<"\t";
						cout<< salary[i] <<endl;
					}		
				break;
			case 5: exit(0);break;
		}
	}while(operation!=5);
	return 0;
}
*/
// function in c++
/*
#include<iostream>
#include<conio.h>
using namespace std;
//create function uesd parameters
int sum(int n){
	int i,s;
	s=0;
	for(i=0;i<=n;i++)
	s=s+i;	
	return s;
}
int main(){
	int n,s1;
	cout<<"Input n=";cin>>n;
	s1=sum(n);	            //calling function
	cout<<"Sum="<<s1;
	getch();
}
*/
//create function used reference
/*
#include<iostream>
#include<conio.h>
using namespace std;
void sum (int n,int &v){
	int i,s;
	s=0;
	for(i=0;i<=n;i++)
	s=s+i;
	v=s;
}
int main(){
	int n,s1;
	cout<<"Input n=";cin>>n;
	sum(n,s1);              //calling function
	cout<<"Sum="<<s1;
	getch();
}
*/
// how to Average used function in c++
/*
#include<iostream>
#include<conio.h>
using namespace std;

//create function uesd parameters

float Average (float math ,float kh,float Eng ) {
	
	return (math+kh+Eng)/3;
}
int main(){
	float math,kh,Eng,Avg;
	cout<<"Input math=";cin>>math;
	cout<<"Input kh=";cin>>kh;
	cout<<"Input Eng=";	cin>>Eng;
	Avg=Average(math,kh,Eng) ;          //calling function
	cout<<"Average="<<Avg;
	getch();
}
*/
/*
//sum nummber 

#include<iostream>
#include<conio.h>
using namespace std;
int sum(int a,int b){
	return a+b;
}
int  main(){
	int a,b,s;
	cout<<"Input a=";cin>>a;
	cout<<"Input b=";cin>>b;
	s=sum(a,b);
	cout<<"Sum="<<s;
	getch();
}

#include<iostream>
#include<conio.h>
using namespace std;
int sum(int a,int b,int &v){
	int s;
	s=a+b;
	v=s;
}
int main(){
	int a,b,s1;
	cout<<"Enter a=";cin>>a;
	cout<<"Enter b=";cin>>b;
	sum(a,b,s1);
	cout<<"Sum="<<s1;
	getch();
}
*/

// maximum in c++ used function 

/*
#include<iostream>
#include<conio.h>
using namespace std;
int maximum (int a,int b) 
{
	if(a>b)
	return a;
	else 
	return b;	
}
int main(){
	int a,b,max;
	cout<<"input a =";cin>>a;
	cout<<"input b=";cin>>b;
	max=maximum(a,b);
	cout<<"Maximum :"<<max;
	getch();
}
*/

// used reference in c++ 

/*
#include<iostream>
#include<conio.h>
using namespace std;
void maximum (int a,int b,int &m) 
{
	int max;
	
	if(a>b)
		max=a;
	else 
		max=b;
	m=max;	
}	
int main(){
	int a,b,max1;
	cout<<"input a =";cin>>a;
	cout<<"input b=";cin>>b;
	maximum(a,b,max1); 			// calling function 
	cout<<"Maximum :"<<max1;
	getch();
}

*/
// maximum in c++
/*
#include<iostream>
#include<conio.h>
using namespace std;
void maximum (int a,int b,int c,int &m) 
{
	int max;
//
	if(a>b&&a>c)
		max=a;
	else if(b>c) 
		max=b;
	else 
		max=c;
//
	max=( a>((b<c) ? a :(b>c)) ? b:c );
	m=max;	
}	
int main(){
	int a,b,c,max1;
	cout<<"========== input Nummber =========="<<endl;
	cout<<"input a =";cin>>a;
	cout<<"input b =";cin>>b;
	cout<<"input c =";cin>>c;
	maximum(a,b,c,max1); 			// calling function
	cout<<"========== output Nummber =========="<<endl; 
	cout<<"Maximum : "<<max1;
	getch();
}
*/
// set  8,10,16 
/*
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(){
	int x=26;
	cout<<"x= "<<setbase(8)<<x;
	getch();
}
*/
/*
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(){
	int x=26;
	cout<<setfill('*');
	cout<<"x= "<<setw(5)<<x;
	getch();
}
*/
/*
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main(){
	float x=20/3.0;
	cout<<setfill('*');
	cout<<"x= "<<setprecision(3)<<x;
	getch();
}
*/
// create programming used funtion input , output , maximum ,sum of array ,sort of array 
/*
#include<iostream>
#include<conio.h>
using namespace std;
void input(int x[],int n){
	for(int i=0;i<n;i++){		
	cout<<"element "<< (i+1) <<":";
	cin>>x[i];
			
	}	
}
void output(int x[],int n){
	for(int i=0;i<n;i++){
		cout<<x[i]<<"\t";
	}
}
void sum(int x[],int n ){
	int sum;
	sum=0;
	for(int i=0;i<n;i++){
		sum+=x[i];
	}
	 cout<<"Sum all element = "<<sum;
}
void max(int x[],int n){
	int max;
	max=x[0];
    for (int i=1;i<n;i++){
    if (x[i]>max)  
        max=x[i] ;  	
	}        
	cout<<"maximum of element :"<<max;
}
void sort(int x[],int n){
	int i,j;
	int temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			// sort element A -> a
			if(x[j]>x[i]){	
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	cout<< x[i]<<"\t";
}
void search (int x[],int n){
	int num,k=0;
	cout << "Enter a number to serach in element :";
    cin >> num;
    // search num in inputArray from index 0 to elementCount-1 
    for( int i=0;i<n;i++){
        if(x[i] == num){
        	k=k+1;
            cout<<"x = "<<x[i]<<"\t";
            break;
        }
    }
    if(k==0){
        cout<<"Search Not found\n";
    }
}


void deleted (int x[],int n){
	char d;
	cout<<endl;
	cout<<"Input d to deleted =";
	cin>>d;
	for(int i=0;i<n;i++)
		if(x[i]==d)
		{
			for(int j=i;j<n;j++)
				x[j]=x[j+1];
			found=1;
			n--;
			i--;
		}
}


int main(){
	int a[50],n;
	cout<<"input n=";cin>>n;
	cout<<"Input all element"<<endl;
	input(a,n);
	cout<<"Output all element"<<endl;
	output(a,n);
	cout<<endl;
	sum(a,n);
	cout<<endl;
	max(a,n);
	cout<<endl;
	cout<<"Output Befor Sort element"<<endl;
	output(a,n);
	cout<<endl;
	cout<<"Output After Sort element"<<endl;
	sort(a,n);
	cout<<endl;
	search(a,n);
	
	
	
    getch();
}
*/
// programming your teacher 
/*
#include<iostream>
#include<conio.h>
using namespace std;
void input_Data (int x[],int n){
	for(int i=0;i<n;i++){
		cout<<"Element "<<(i+1)<<":";
		cin>>x[i];
	}
}
void output_Data(int x[],int n){
	for(int i=0;i<n;i++)
	   cout<<x[i]<<"\t";
	   cout<<endl;
}
void sum_Data(int x[],int n){
	int s;
	s=0;
	for(int i=0;i<n;i++)
		s=s+x[i];
	cout<<"Sum all Element :"<<s;
}
void max_Data(int x[],int n){
	int max=x[0];
	for(int i=1;i<n;i++)
	    if (max < x[i]) max=x[i];
		cout<<"Maximum Element :"<<max;
}
void min_Data(int x[],int n){
	int min=x[0];
	for(int i=1;i<n;i++)
	    if (min > x[i]) min=x[i];
		cout<<"Minimum Element :"<<min;
}
void sort_Data(int x[],int n){
	int temp;
	for(int i=0;i<n-1;i++)
	   for(int j=i;j<n;j++){
	   	  if(x[i]>x[j])
			 {
	   	  	  temp=x[i];
	   	  	  x[i]=x[j];
	   	  	  x[j]=temp;
			 }
	   }
	cout<<"Output Element After Sort"<<endl;
	for(int i=0;i<n;i++)
	   cout<<x[i]<<"\t";
}
void search (int x[],int n){
	int num,k=0;
	cout << "Enter a number to serach in element :";
    cin >> num;
    // search num in inputArray from index 0 to elementCount-1 
    for( int i=0;i<n;i++){
        if(x[i] == num){
        	k=k+1;
            cout<<"x = "<<x[i]<<"\t";
            break;
        }
    }
    if(k==0){
        cout<<"Search Not found\n";
    }
}
int main(){
	int a[50],n;
	cout<<"Enter n=";cin>>n;
	cout<<"Input Element of Array "<<endl;
	input_Data(a,n);
	cout<<"Output Element of Array"<<endl;
	output_Data(a,n);
	sum_Data(a,n);
	cout<<endl;
	max_Data(a,n);
	cout<<endl;
	min_Data(a,n);
	cout<<endl;
	cout<<"Output Element Befor Sort"<<endl;
	output_Data(a,n);
	sort_Data(a,n);
	cout<<endl;
	search(a,n);
	getch();
}
*/
// Pointer
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int *p,x;
	p=&x; // (values p = address of x)==>p=x
	x=35;
	cout<<"x= "<<x<<endl; //Access values Follow varible
	cout<<"x= "<<*p<<endl; // Access values Follow Pointer(p=&x 0r values p = values x)
	cout<<"Address x ="<<&x<<endl; //Access Address Follow &A
	cout<<"Address x ="<<p <<endl; //Access Address Follow P
	getch();
}
*/

// Array and Pointer 
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int *p, a[10]{11,34,67,89,35,68,98,23,15,19};
	p=&a[0];
	for(int i=0;i<10;i++){
		cout<<*p<<"\t";
	    p++;
	}
	//	cout<<*(p+i)<<"\t";
	//	cout<<*(a+i)<<"\t";
	//   cout<< a[i] <<"\t";
	
	getch();
}
*/
//Array and Pointer reveres values
/*
#include<iostream>
#include<conio.h>
using namespace std;
int main(){
	int *p, a[10]{11,34,67,89,35,68,98,23,15,19};
	p=&a[9];
	for(int i=0;i<10;i++){
		cout<<*p<<"\t";
	    p--;
	}
	
	getch();
}

*/
