#include<iostream>
using namespace std;
main()
{
	int i,n,real_num,d,r=0;
	cout<<"Enter Number:";
	cin>>n;
	cout<<endl;
	real_num=n;
	for(i=1;n!=0;i++)
	{
		d=n%10;
		r=r*10+d;
		n=n/10;
	}
	if(r==real_num)
	{
		cout<<real_num<<" Number is Palindrome";
	}
	else{
		cout<<real_num<<" Number is not Palindrome";	
	}
	
}
