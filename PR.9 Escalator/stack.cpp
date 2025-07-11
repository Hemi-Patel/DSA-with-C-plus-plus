#include<iostream>
using namespace std;

class stack{
	private:
		int *arr;
		int top;
		int capacity;		
	public:
		stack(int size){
			capacity=size;
			arr=new int [capacity];
			top=-1;
		}
		bool isFull() {
			return top == capacity - 1;
		}
		bool isEmpty() {
			return top == -1;
		}
		void push_element(int value){
			if(isFull()){
				cout<<"\nStack is oversflow....you can't push an element"<<endl<<endl;
				
			}else{
				arr[++top]=value;
				cout<<"\nValue Push to stack........."<<endl<<endl;
			}
		}
		int pop_element() {
			if (isEmpty()) {
				cout << "Stack is empty........" << endl;
				return -1; 
			} else {
				int poppedValue = arr[top--]; 
				return poppedValue;
			}
		}
		void peek_element() {
			if (isEmpty()) {
				cout << "Stack is empty........" << endl;
			} else {
				cout << "Top element in stack is: " <<arr[top]<<endl<<endl;
			}
		}
		
		~stack(){
			delete[] arr;
		}
};
main(){
	int ch,value;
	int size_stack;
	cout<<"Enter Stack size:";
	cin>>size_stack;
	
	stack s(size_stack);
	while(1){
		cout<<"Press 1 for Push an Element in stack"<<endl;
		cout<<"Press 2 for Pop an Element in stack"<<endl;
		cout<<"Press 3 for Display Top Element in stack"<<endl;
		cout<<"Press 4 for Check stack is empty or not"<<endl;
		cout<<"Press 5 for Check stack is Full or not"<<endl;
		cout<<"Press 0 for Exit"<<endl<<endl;
		cout<<"Enter Your Choice:";
		cin>>ch;
		cout<<endl;
		if (ch==0){
			cout<<"Thank you.........."<<endl<<endl;
			break;
		}
		switch(ch){
			case 1:
				cout<<"Enter Value to Push:";
				cin>>value;
				s.push_element(value);
				
				break;
			case 2:
				value = s.pop_element();
				if (value != -1) {
					cout << "Value poped from stack........"<<endl<<endl;
				}
				break;
			case 3:
				s.peek_element();
				break;
			case 4:
				if(s.isEmpty()){
					cout << "Stack is empty........"<<endl<<endl;
				}
				else{
					cout << "Stack is not empty........"<<endl<<endl;
				}
				break;
			case 5:
				if(s.isFull()){
					cout<<"\nStack is Full......"<<endl<<endl;
				}else{
					cout<<"\nStack is not  Full......"<<endl<<endl;
				}	
				break;
			default:
				cout<<"Please enter Right choice......"<<endl<<endl;
				break;
				
		}
		
	}
}
