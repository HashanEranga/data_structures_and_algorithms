#include <iostream>
#include <vector>

using namespace std;

int kadansSubSumArr(vector<int> arr){

	int currentSum=0;
	int largestSum=0;
	for(int i=0;i<arr.size();i++){
		currentSum+=arr[i];
		if(currentSum<0) currentSum=0;
		largestSum=max(largestSum,currentSum);
	}
	return largestSum;
}

int main(){

	vector<int> arr{1,2,-3,4,5,6,7,8,9};
	cout << kadansSubSumArr(arr);
	return 0;
}
