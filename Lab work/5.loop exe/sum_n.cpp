#include<iostream>
using namespace std;
main()
{
	int i,n,sum=0;
	cout<<"Enter Number:";
	cin>>n;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		cout<<i<<" ";
		sum+=i;
	}
	cout<<endl<<endl;
	cout<<"Sum of n numbers:"<<sum;
}
