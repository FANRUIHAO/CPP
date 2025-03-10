/*
    重载<<或者>>运算符的实例
*/
#include<iostream>

using namespace std;

class ss{
	private:
		int id;
		string name;
		double cg;
		double eg;
		double mg;
	public:
		ss(){
		}

		ss(int a, string b, double c, double d, double e):id(a),name(b),cg(c),eg(d),mg(e){
		}
		
		void print(){
			cout<<"id："<<id<<",name:"<<name<<",cg:"<<cg<<",eg:"<<eg<<",mg:"<<mg<<endl;
		}
		void sum(){
			cout<<"sum="<<cg+eg+mg<<endl;
		}
		void avg(){
			cout<<"avg="<<(cg+eg+mg)/2<<endl;
		}
		friend ostream& operator<<(ostream &os, const ss &a){
			cout<<"id:"<<a.id<<",name"<<a.name<<endl;
			os<<"c++score:"<<a.cg<<endl;
			return os;
		}
		
};

int main(){
	ss a(1,"aa", 2, 4, 55);
	a.print();
	cout<<a<<endl;
	return 0;
}



/*
    二分法查找
*/
#include <iostream>
#include <vector>
using namespace std;

int bisearch(int a[], int n, int x, int & count){
	
	int begin=0, end=n-1;
	int mid = 0;
	while(begin <= end){
		count++;
		mid = (begin + end)/2;
		if(a[mid] == x){
			return mid;
		}else if(a[mid] > x){
			end = mid - 1;
		}else if(a[mid] < x){
			begin = mid + 1;
		}
	}
	return -1;
}

int main(){
	int a[5] = {1,2,3,4,5};
	int count = 0;
	cout<<bisearch(a, 5, 2, count)<<endl;
	return 0;
}



//题目：输入n个学生的信息（学号id和年龄age，学号为字符串），输出学号最大学生的年龄
#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    string id;
    int age;
public:
    Student() {}  // 添加默认构造函数
    Student(string a, int b) : id(a), age(b) {}

    string getid() { return id; }
    int getage() { return age; }
};

int main() {
    int n;
    cout << "请输入学生数: ";
    cin >> n;

    Student* p = new Student[n];  // 直接创建 Student 数组

    for (int i = 0; i < n; i++) {
        string id;
        int age;
        cout << "请输入第 " << i + 1 << " 个学生的学号和年龄: ";
        cin >> id >> age;
        p[i] = Student(id, age);  // 赋值给数组元素
    }

    // 找学号最大的学生
    Student *temp = p[0];  // 初始设为第一个学生
    for (int i = 1; i < n; i++) {
        if (p[i].getid() > temp.getid()) {
            temp = p[i];
        }
    }

    cout << "学号最大的学生年龄为: " << temp.getage() << endl;

    delete[] p;  // 释放动态数组

    return 0;
}