#include<iostream>
using namespace std;

class person
{
	
	public:
		int name;
		int age;
	public:
		void init(){
			cout<<""<<endl;
			cin>>name;
			cout<<""<<endl;
			cin>>age;
		}
};
int main(){
	person zhangsan;
	zhangsan.init();
	
}
