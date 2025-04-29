#include<iostream>
using namespace std;
main()
{
	int i,n,d,sum=0;
	cout<<"Enter Number:";
	cin>>n;
	for(i=1;n!=0;i++)
	{
		d=n%10;
		sum+=d;
		n=n/10;
	}
	cout<<"Sum of digits:"<<sum;
}
