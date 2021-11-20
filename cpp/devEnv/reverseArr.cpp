#include <iostream>
#include <vector>

using namespace std;

void reverseArr(vector<int> arr){
	for(int i=arr.size()-1;i>=0;i--) cout << arr[i] << endl;
}

void reverseArrSwappingMethod(vector<int> arr){
	int start=0;
	int end=arr.size()-1;

	while(start<end){
		swap(arr[start],arr[end]);
		start++;
		end--;
	}
}

int main(){
	vector<int> arr{1,2,3,4,5,6,7,8,9};
	reverseArr(arr);
	return 0;
}
