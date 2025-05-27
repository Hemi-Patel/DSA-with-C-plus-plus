//5. Find the smallest element in an array..
#include<iostream>
using namespace std;
main()
{
	int n,small_ele
	;
	cout<<"Enter Array Size:";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cout<<"a["<<i<<"]:";
		cin>>a[i];
	}
	small_ele=a[0];
	for(int i=0;i<n;i++){
		if(a[i]<small_ele){
			small_ele=a[i];
		}
	}
	cout<<"Smallest Element of Array is:"<<small_ele;	
}
