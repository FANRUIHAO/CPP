#include<iostream>
using namespace std;

struct Node{
	int a;
	Node* next;
};

class queue{
	public:
		Node q=(Node)malloc(sizeof(Node));
		Node l=q;
	public:
		void put(int x){
			Node s=(Node)malloc(sizeof(No nde));
			s.next=null;
			s->data=x;
			(*q)->next=s;

		}
		void get(){
			
		}
};

int main(){
	queue que;
	que.put(10);
	que.put(22);
	que.put(33);
	
	
	cout<<que.get()<<endl;
	cout<<que.get()<<endl;
}
