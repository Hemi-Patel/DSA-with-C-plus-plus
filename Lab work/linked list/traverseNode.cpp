#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
};
main(){
	Node *ptr=NULL;
	Node *head=new Node();
	
	head->data=78;
	head->next=NULL;
	ptr=head;
	
	Node *current=new Node();
	current->data=45;
	current->next-NULL;
	head->next=current;
	
	current=new Node();
	current->data=56;
	current->next=NULL;
	head->next->next=current;
	
	while(ptr!=NULL){
	
		cout<<"Data: "<<ptr->data<<endl;
		cout<<"Current Node Address: "<<ptr<<endl;
		cout<<"Next Node Address: "<<ptr->next<<endl<<endl;
		ptr=ptr->next;
	}
	
}
