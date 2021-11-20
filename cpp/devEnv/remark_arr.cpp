#include <iostream>

using namespace std;

// function for display array elements 
void dispArr(int * arr,int n){
	for(int i=0;i<n;i++)
		cout << arr[i] << " ";
	cout << endl;
}


int main(){

	// define an array 
	int arr[] = {1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	// display elements in an array
	dispArr(arr,n);
	return 0;
}
