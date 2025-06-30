#include<iostream>
using namespace std;

class Node{
	public:
		int data;
		Node *next;
		
		Node(int data){
			this->data=data;
			this->next=NULL;
		}
};
class LinkedList{
	public:
		int count;
		Node *head;
		
		LinkedList(){
			head=NULL;
			count=0;
		}
		void creatNode(int data){
			Node *n=new Node(data);
			if(head==NULL){
				head=n;
			}else{
				Node *tmp=head;
				while(tmp->next!=NULL){
					tmp=tmp->next;
				}
				tmp->next=n;
			}
			count++;
			cout<<"Node Created......"<<endl<<endl;
		}
		void viewNode(){
			Node *ptr=head;
			while(ptr!=NULL){
			
				cout<<"Data: "<<ptr->data<<endl;
				cout<<"Current Node Address: "<<ptr<<endl;
				cout<<"Next Node Address: "<<ptr->next<<endl<<endl;
				ptr=ptr->next;
			}
		}
		void updateData(int position,int newData){
			if (position < 0 || position >= count) {
				cout << "Invalid position......."<<endl<<endl;
				return;
			}
			Node *ptr=head;
			for(int i=0;i<position;i++){
				ptr=ptr->next;
			}
			ptr->data=newData;
			cout<<"Updated........"<<endl<<endl;
		}
		void deleteData(int position){
			if (position < 0 || position >= count) {
				cout << "Invalid position........"<<endl<<endl;
				return;
			}
			
				
			Node *temp;
			if (position == 0) {
				temp = head;
				head = head->next;
			} else {
				Node *prev = head;
				for (int i = 0; i < position - 1; i++) {
					prev = prev->next;
				}
				temp = prev->next;
				prev->next = temp->next;
			}
			delete temp;
			count--;
			cout << "deleted........"<<endl<<endl;
		}
		
};

main(){
	int ch;
	int data,position,newData;
	LinkedList list;
	while(1){
		cout<<"1.Create Node"<<endl;
		cout<<"2.View Node"<<endl;
		cout<<"3.Update Node"<<endl;
		cout<<"4.Delete Node"<<endl;
		cout<<"0.Exit"<<endl;
		cout<<"Enter Your Choice:";
		cin>>ch;
		cout<<endl;
		
		if(ch==0){
			cout<<"Thank you...."<<endl;
			break;
		}
		switch(ch){
			case 1:
				cout<<"Enter Node Data:";
				cin>>data;
				list.creatNode(data);
				break;
			case 2:
				list.viewNode();
				break;
			case 3:
				cout<<"Enter Node Postion to Update Node:";
				cin>>position;
				cout<<"Enter New Data:";
				cin>>newData;
				list.updateData(position,newData);
				break;
			case 4:
				cout<<"Enter Node Postion to Delete Node:";
				cin>>position;
				list.deleteData(position);
				break;
			
		}
	}
}


























