//1. Input and output elements of an array.
#include<iostream>
using namespace std;
main()
{
	int n;
	cout<<"Enter Array Size:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]:";
		cin>>a[i];
	}
	cout<<"---------Print Array---------"<<endl;
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]:"<<a[i]<<endl;
	}
	
}

