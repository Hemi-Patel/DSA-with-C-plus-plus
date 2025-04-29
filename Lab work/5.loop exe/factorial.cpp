#include<iostream>
using namespace std;
main()
{
	int i,n,fact=1;
	cout<<"Enter Number:";
	cin>>n;
	cout<<endl;
	for(i=n;i>=1;i--)
	{
		cout<<i<<" ";
		fact*=i;
	}
	cout<<endl<<endl;
	cout<<"Factorial of n numbers:"<<fact;
}
