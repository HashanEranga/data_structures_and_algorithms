#include <iostream>
#include <vector>

using namespace std;

void insertionSort(int arr[], int n){
	
	int i,j,key;

	for(i=1;i<n;i++){
		key = arr[i];
		j=j-1;

		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];
			j-=1;
		}

		arr[j+1] = key;
	}

	for(int elem : arr){
		cout << elem << " ";
	}
	cout << endl;
}

int main(){

	int arr[] = {5,4,1,2,3};
	int n = sizeof(arr)/sizeof(arr[0]);

	insertionSort(arr, n);

	cout << endl;
	return 0;
}