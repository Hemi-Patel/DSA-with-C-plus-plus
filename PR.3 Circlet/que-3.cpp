//question-3

#include<iostream>
using namespace std;

main()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{	
		if (j < i) {
               cout <<" ";
            }
            else {
                cout <<j;
            }
		}
		cout<<endl;
	}
}
