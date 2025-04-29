#include<iostream>
using namespace std;
main()
{
	int i,n,ans;
	cout<<"Enter Number:";
	cin>>n;
	cout<<endl;
	cout<<"Table of "<<n<<" is:"<<endl<<endl;
	for(i=1;i<=10;i++)
	{
		ans=n*i;
		cout<<n<<" * "<<i<<" = "<<ans<<endl;
	}
}
