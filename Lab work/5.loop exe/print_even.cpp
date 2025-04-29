#include<iostream>
using namespace std;
main()
{
	int n,i;
	cout<<"Enter Number:";
	cin>>n;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<i<<" ";
		}
	}
}
