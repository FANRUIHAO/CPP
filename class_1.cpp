#include<iostream>
using namespace std;

class person
{
	
	public:
		string name;
		int age;
	public:
		void init(){
			cout<<"please imput your name"<<endl;
			cin>>name;
			cout<<"please input your age"<<endl;
			cin>>age;
		}
};
int main(){
	person zhangsan;
	zhangsan.init();
}
