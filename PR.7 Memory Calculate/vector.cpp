#include<iostream>
#include<vector>
using namespace std;
template <class T1,class T2>
class student{
	public:
		T1 id;
		T2 name;
	student(T1 id,T2 name){
		this->id=id;
		this->name=name;
	}
	void display(){
		cout<<"Student Id:"<<this->id<<endl;
		cout<<"Student Name:"<<this->name<<endl;
	}
};
vector <student<int, string> > stud;	
int main(){	
	
	int id;
	string name;
	int found=0,search_id;
	int i,ch;
	while(1){
		cout<<"----------------------------------------------"<<endl;
		cout<<"1.Add Student"<<endl;
		cout<<"2.Display  all Student details"<<endl;
		cout<<"3.Remove Student by ID"<<endl;
		cout<<"4.Search student by ID"<<endl;
		cout<<"5.Exit"<<endl;
		cout<<"----------------------------------------------"<<endl;
		cout<<"Enter Your Choice:";
		cin>>ch;
		cout<<"----------------------------------------------"<<endl;
		if(ch==5){
			cout<<"Thank you"<<endl;
			break;
		}
		switch(ch){
			case 1:
				cout<<"Enter Student ID:";
				cin>>id;
				cout<<"Enter Student Name:";
				cin>>name;
				
				stud.push_back(student<int, string> (id,name));
				cout << "Student added successfully"<<endl;
				break;
			case 2:
			    for(int i=0;i<stud.size();i++){
			       stud[i].display();
			    }
			    break;
			case 3:
				cout<<"Enter student id to delete record:";
				cin>>id;
				for(int i=0;i<stud.size();i++){
			       if(stud[i].id == id){
			       		stud.erase(stud.begin() + i);
			       		cout<<"Student data deleted......"<<endl;
				   }
				   else{
				   	cout<<"ID not found"<<endl;
				   }
			    }
			    break;
			case 4:
				cout<<"Enter student id to search record:";
				cin>>search_id;
				for(int i=0;i<stud.size();i++){
			       if(stud[i].id == search_id){
			       			cout<<"Student ID:"<<stud[i].id<<endl;
			       			cout<<"Student name:"<<stud[i].name<<endl;
			       			found=1;
			       			break;
				   }
				   else{
				   	found=0;
				   }
			    }
			    if(found != 1){
			    	cout<<"ID not Found"<<endl;
				}
			    break;
		}
	}
	return 0;
}
