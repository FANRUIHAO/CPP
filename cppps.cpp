#include<iostream>
using namespace std;

class Tdate{
	public:
		int month;
		int day;
		int year;
		void Set(int a, int b, int c){
			month=a;
			day=b;
			year=c;
		}
		int IsleapYear(){
			return(year==1||day==1||month==1);
		}
		void print(){
			cout<<day<<month<<year<<endl;
		}
		
		
		
};
int main(){
			Tdate t;
			t.Set(1,2,3);
			t.print();
		}
