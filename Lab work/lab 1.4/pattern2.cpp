#include<iostream>
using namespace std;
main()
{
	int i;
	for(i=0;i<=5;i++){
		for(int j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
	for(i=5;i>=0;i--){
		for(int j=0;j<i;j++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
