#include <iostream>
using namespace std;
int M = 17;
class Node
{
	private:
		int data;
		Node* next;
		Node* head;
	public:
		Node(){ 
		    data = 0;
		    next = nullptr;
		}
		virtual~Node(){
		}
		Node(int value){
			data = value;
			next = nullptr;
		}
		int getData(){return data;	}
		void setData(int value){ data = value; }
		Node* getNext(){return next; }
		void setNext(Node* p){this->next = p; }
		void setHead(Node* p){this->head = p;}
		Node* getHead(){return head;}
};
class linkedlist
{
	private:
	    Node* head;
	public: 
	    linkedlist(){
	    	this->head = nullptr; 
		}
		void setHead(Node* p){this->head = p;}
		Node* getHead(){return head;}
} ;
void initHash(linkedlist* heads[]){
	for(int i = 0; i < M; i++){
        heads[i]->setHead(nullptr); 
	}
}
int hashFunc(int x){
	return x%M;
}
void insertNodeHash(Node* heads[], int v){
	int h = hashFunc(v);
	Node* p = heads[h]->getHead();
	Node* prev = new Node();
	while(p != nullptr && p->getData() < v){
		prev = p;
		p = p->getNext();
	}
	Node* nnode = new Node(v);
	if(prev == nullptr){ // them vao dau
		heads[h]->setHead(nnode);
		heads[h]->getHead()->setNext(p);
	}
	else if( p == nullptr){ // them vao cuoi
		prev->setNext(nnode);
	}
	else{
		prev->setNext(nnode);
		nnode->setNext(p);
	}
}
void display(Node* heads[]){
	for(int i = 0; i < M; i++){
		cout << "afasdf" ;
		if(heads[i]->getHead()!= nullptr){
			cout << "Bucket thu " << i << ": ";
			Node* p = heads[i]->getHead();
			while(p!=nullptr){
				cout << p->getData() << " ";
				p = p->getNext();
			}
		}
		cout << endl;
	}
}
int main(){
	linkedlist* s[M];
	initHash(s); 
	insertNodeHash(s, 8);
	insertNodeHash(s, 4);
	insertNodeHash(s, 9);
	insertNodeHash(s, 3);
	insertNodeHash(s, 15);
	insertNodeHash(s, 18);
	insertNodeHash(s, 26);
	display(s);
	return 0;
}
	 
