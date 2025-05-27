//9. Count the number of negative numbers in an array.
#include<iostream>
using namespace std;
main()
{
	int n,count=0;
	cout<<"Enter Array Size:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]:";
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]<=0)
		{
			count++;
		}
	}
	cout<<"Number Of negative Numbers in an Array:"<<count;
}
