#include<iostream>
using namespace std;

class Date{
	public:
		
		void Set(int *a,int *b,int *c){
			cout<<"please input a, b, c:";
			cin>>*a>>*b>>*c;
		}
		
		void addday(int *a){
			(*a)+=1;
		}
		void print(int a,int b,int c){
			cout<<a<<"/"<<b<<"/"<<c<<endl;
		}
	public:
		int a;
		int b;
		int c;
};

int main(){
	Date d;
	d.a=1;
	d.b=2;
	d.c=3;
	d.Set(&d.a,&d.b,&d.c);
	d.print(d.a,d.b,d.c);
	d.addday(&d.a);
	d.print(d.a,d.b,d.c);
}
