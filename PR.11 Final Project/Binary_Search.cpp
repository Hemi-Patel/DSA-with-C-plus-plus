#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key) {
	int low = 0, high = n - 1;
	while (low <= high) {
        int mid = (low + high) / 2;
		if (arr[mid] == key){
  		    return mid; 
 	    }
		else if (arr[mid] < key){
  		    low = mid + 1;	
		}
		else{
		    high = mid - 1;
		}		
	}
	return -1;
}
main() {
	int arr[] = {2, 4, 6, 8, 10, 12, 14};
	int n = sizeof(arr) / sizeof(arr[0]);
	int key;
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	cout<<"Enter Element to find from array: ";
	cin>>key;
	int index = binarySearch(arr, n, key);
	if (index != -1){
		cout << "Element found at index: " << index << endl;
	}  
	else{
		cout << "Element not found." << endl;
	}		
}
