#include<iostream>
using namespace std;
main()
{
	int i,n,d,r=0;
	cout<<"Enter Number:";
	cin>>n;
	for(i=1;n!=0;i++)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	cout<<"Reverse Number:"<<r;
}
