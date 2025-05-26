//2. Find the sum of all elements in an array.
#include<iostream>
using namespace std;
main()
{
	int n,sum=0;
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
	cout<<"Sum of Array Element are:"<<sum;
	
}

