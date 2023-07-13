#include<iostream>
#include<conio.h>
using namespace std;
// Solide    
class Solide{
	public :
		virtual void input()=0;
		virtual void output()=0;
		virtual float volume()=0;
};
// Rectangular parameter (w l h) volume return (w*l*h)
class Rectangular:public Solide{
	private:
		float w,l,h;
	public:
		Rectangular(float l1=0,float w1=0,float h1=0){
			w=w1;
			l=l1;
			h=h1;
		}
		virtual void input(){
			cout<<"Withd :";cin>>w;
			cout<<"Leght :";cin>>l;
			cout<<"Hight :";cin>>h;
		}
		virtual void output(){
			cout<<l<<"\t"<<w<<"\t"<<h<<endl;
		}
		virtual float volume(){	return l*w*h;}
};
// cylinder parameter(r h ) volume rturn (3.14* r* r* h)
class Cylinder : public Solide{
	private:
		float r,h;
	public:
		Cylinder(float r1=0,float h1=0){
			r=r1;
			h=h1;
		}
		virtual void input(){
			cout<<"Radius :";cin>>r;
			cout<<"Height :";cin>>h;
		}
		virtual void output(){
			cout<<r<<"\t"<<h<<endl;
		}
		virtual float volume(){
			return 3.14*r*r*h;
		}	
};
// Sphere parameter (r) volume return (v = 4/3*3.14 *r*r*r) 
class Sphere : public Solide{
	private:
		float r;
	public:
		Sphere(float r1=0){
			r=r1;
		}
		virtual void input(){
			cout<<"Radius :";cin>>r;
		}
		virtual void output(){
			cout<<r<<endl;
		}
		virtual float volume(){
			return 4/3*3.14 *r*r*r;
		}
};
// sum arry poniter
float totalVolume(Solide *a[],int n){
	float v=0;
	for(int i=0;i<n;i++){
		v=v+a[i]->volume();
	}
	return v;
}

int main(){
	// *a[10]  arry poniter
	Solide *a[10] = {
        new Rectangular(),
        new Cylinder(),
        new Sphere(),
        new Rectangular(),
        new Cylinder(),
        new Sphere(),
        new Rectangular(),
        new Cylinder(),
        new Sphere(),
        new Rectangular()
    };
    float total;
    cout<<"Input of Solider :"<<endl;
    for(int i=0;i<10;i++){
    	a[i]->input();
	}
	cout<<"*************** Output of Element ***************"<<endl;
    for (int i = 0; i < 10; i++) {
        a[i]->output();
    }
    total=totalVolume(a,10);
    cout<<"Total Volume :"<<total<<endl;
	getch();
}
