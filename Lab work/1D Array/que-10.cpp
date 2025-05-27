//10. Reverse the elements of an array.
#include<iostream>
using namespace std;
main()
{
	int n,temp;
	cout<<"Enter Array Size:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]:";
		cin>>a[i];
	}
	for(int i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<"Reverse Array Element:"<<a[i]<<" ";
	}	
}
