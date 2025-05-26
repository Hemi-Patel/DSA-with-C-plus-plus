//3. Find the average of elements in an array.
#include<iostream>
using namespace std;
main()
{
	int n,sum=0,avg=0;
	cout<<"Enter Array Size:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]:";
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		sum+=a[i];
	}
	avg=sum/n;
	cout<<"Average of Array Element are:"<<avg;
	
}

