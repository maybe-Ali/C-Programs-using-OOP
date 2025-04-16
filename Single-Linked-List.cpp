// Single Linked List 
// function include like:
// 1) push_front (add-at-beginning)
// 2) push_back (add-at-back)
// 3) pop_Back (delete Node from back)
// 4) pop_front (Delete Node from Front)
// 5) Insert-at-specific-Node
// 6) Display Nodes

#include<iostream>
using namespace std;
class node{
public:
	int data;
	node* next;	

	node(int val){
		data = val;
		next= NULL;
	}
};
class list{
	node* head;
	node* tail;
public:
	list(){
		head = tail = NULL;
	}
	
	void push_front(int val){
		node* newNode = new node(val);
		if(head==NULL){
			head= tail = newNode;
			return;
		}else{
			newNode->next = head;
			head = newNode;
		}				
	}
	
	void push_back(int val){
		node* newNode = new node(val);
		if(head == NULL){
			head = tail = newNode;
		}else{
			tail->next	 = newNode;
			tail = newNode;
		}
	}
	
	void pop_front(){
		node* temp = head;
		head = temp->next;
		temp->next = NULL;
		delete temp;  
	}
	
	void pop_back(){
		node* temp = head;
		while(temp->next!=tail){
			temp = temp->next;
		}		
		temp->next = NULL;	
		delete tail;	
		tail = temp;		
	}
	
	void insert(int val,int pos){
		if(pos==0){
			push_front(val);
			return;
		}
		node* temp = head;
		
		for(int i=0;i<pos-1;i++){
			temp=temp->next;
		}
		node* newNode = new node(val);
		newNode->next = temp->next;
		temp->next = newNode;
	}
	
	void printll(){
		node* temp = head;
		cout<<" ";
		while(temp!=NULL){
			cout<< temp->data<<"->";
			temp = temp->next;			
		} 
		cout<<"NULL";
	}
};
int main(){	
	list ll;
	ll.push_front(2);
	ll.push_front(3);
	ll.push_front(4);
	
	ll.push_back(3);
	ll.push_back(30);
	
	ll.insert(40,1);
	
//	ll.pop_front();
//	ll.pop_back();
	ll.printll();	
	return 0;
}
