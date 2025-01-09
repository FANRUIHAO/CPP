#include<iostream>
using namespace std;

class Student{
	public:
		float grade(){
			return 2.2;
		}
		float grade(float a){
		}
	protected:
		int name;
};

class slope{
	public:
			float grade(){
			}
	protected:
		int name;
}t;
char grade(float value){//全局变量
	return value<1?'a':'b';
}

int main(){
	Student s;
	slope t;
	s.grade(2.1);
	float k=s.grade();
	float l=s.grade(2.3);
	char q=grade(5.5);
	cout<<k<<l<<q<<endl;
}

