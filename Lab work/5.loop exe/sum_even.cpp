#include<iostream>
using namespace std;
main()
{
	int n,i,sum_even=0;
	cout<<"Enter Number:";
	cin>>n;
	cout<<endl;
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			cout<<i<<" ";
			sum_even+=i;
		}
		
	}
	cout<<endl<<endl;
	cout<<"Sum of Even Number:"<<sum_even<<endl<<endl;	
}
