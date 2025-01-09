#include<iostream>
using namespace std;

class Time{
	public:
		int h;
		int m;
		int s;
	public:
		void livetime(){
			cin>>h>>m>>s;
			cout<<h<<":"<<m<<":"<<s<<endl;
			
		}
	
};

int main(){
	Time t;
	t.livetime();
}
