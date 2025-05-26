//4. Find the largest element in an array.
#include<iostream>
using namespace std;
main()
{
	int n,large_ele=0;
	cout<<"Enter Array Size:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]:";
		cin>>a[i];
	}
	
	for(int i=0;i<n;i++){
		if(a[i]>large_ele){
			large_ele=a[i];
		}
	}
	
	cout<<"Largest Element of Array is:"<<large_ele;
	
}
