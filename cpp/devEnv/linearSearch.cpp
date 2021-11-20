#include <iostream>
#include <vector>

using namespace std;

bool findElem(vector<int> arr, int key){
	for(auto i : arr){
		if(key==i) return true;
	}
	return false;
}

int main(){

	// creating a sample vector 
	vector<int> arr{1,2,3,4,5,6,7,8,9};

	// creating the element need to find 
	int elem = 100;

	//find the element 
	int ans = findElem(arr, elem);
	
	if(ans) cout << "The element on the array " << endl;
	else cout << "The element not found" << endl;

	return 0;
}
