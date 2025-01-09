#include<iostream>
using namespace std;
class Tdate{
	public:
		void Set(int,int,int);
		int Istrue();
		void printf();
	private:
		int month;
		int day;
		int year;
};

void Tdate::Set(int a, int b, int c){
	month=a;
	day=b;
	year=c;
}

int Tdate::Istrue(int a, int b, int c){
	return a*b*c<1?1:2;
}

void Tdate::printf(int a, int b, int c){
	cout<<a<<b<<c<<endl;
}

