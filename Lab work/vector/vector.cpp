#include<iostream>
#include<vector>
using namespace std;
vector <int> n;
void addElement(int val){
	n.push_back(val);
	cout<<"Element Added in Vector"<<endl;
}
void showElement(){
	for(int i=0;i<n.size();i++){
		cout<<n.at(i)<<endl;
	}
}
void deleteElement(int index)	{
	n.erase(n.begin()+index);
	cout<<"After delete element at "<<index<<" index From Vector"<<endl;
	for(int i=0;i<n.size();i++){
		cout<<n.at(i)<<endl;
	}
}
void sizeOfVector(){
	cout<<"Size Of Vector is:"<<n.size()<<endl;
}
void insertElement(int index,int val){
	n.insert(n.begin()+index,val);
	cout<<"After insert element in Vector"<<endl;
	for(int i=0;i<n.size();i++){
		cout<<n.at(i)<<endl;
	}
}
void findElement(int index){
	cout<<"Value at "<<index<<" index in vector is:"<<n.at(index)<<endl;
}
main(){
	int i,ch,value,index;
	while(1){
		cout<<"----------------------------------------------"<<endl;
		cout<<"1.Add element in vector"<<endl;
		cout<<"2.Show all elements of vector"<<endl;
		cout<<"3.Delete element at Specific Index in vector"<<endl;
		cout<<"4.Find Size of Vector"<<endl;
		cout<<"5.Insert Element at Specific Index"<<endl;
		cout<<"6.Find Element at Given index in vector"<<endl;
		cout<<"7.Clear vector"<<endl;
		cout<<"8.Exit"<<endl;
		cout<<"----------------------------------------------"<<endl;
		cout<<"Enter Your Choice:";
		cin>>ch;
		cout<<"----------------------------------------------"<<endl;
		if(ch==8){
			cout<<"Thank you"<<endl;
			break;
		}
		switch(ch){
			case 1:
				cout<<"Add element in vector"<<endl;
				cout<<"Enter Value To add in Vector:";
				cin>>value;
				addElement(value);
				break;
			case 2:
				cout<<"All elements in vector"<<endl;
				showElement();
				break;
			case 3:
				cout<<"Enter Index to delete Element in vector:";
				cin>>index;
				deleteElement(index);
				break;
			case 4:
				sizeOfVector();
				break;
			case 5:
				cout<<"Enter Index to Insert Element in vector:";
				cin>>index;
				cout<<"Enter Value to Insert Element in vector:";
				cin>>value;
				insertElement(index,value);
				break;
			case 6:
				cout<<"Enter Index to Insert Element in vector:";
				cin>>index;
				findElement(index);
				break;
			case 7:
				n.clear();
				cout<<"Vector Cleared......"<<endl;
				break;	
			default:
				cout<<"Wrong Choice......"<<endl;
				break;
		}
		
	}
}
