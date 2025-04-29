#include<iostream>
using namespace std;
main()
{
	int i,n,product=1;
	cout<<"Enter Number:";
	cin>>n;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<i<<" ";
		product*=i;
	}
	cout<<endl<<endl;
	cout<<"Product of n numbers:"<<product;
}
