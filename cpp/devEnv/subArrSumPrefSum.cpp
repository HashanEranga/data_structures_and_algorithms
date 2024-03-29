#include <iostream>
#include <vector>

using namespace std;

int subArrSumPrefSum(vector<int> arr){
	
	int n=arr.size();
	int largestSum=0;
	
	// prefix array
	vector<int> prefArr;
	prefArr[0]=arr[0];

	for(int i=1;i<n;i++){
		prefArr[i] = prefArr[i-1]+arr[i];
	}

	for(auto i:prefArr) cout << i << " ";
	cout<<endl;

	for(int i=0;i<n;i++){
		for(int j=1;j<n;j++){
			int currentSum;
			if(i!=0) currentSum=prefArr[j]-prefArr[i-1];
			else currentSum=prefArr[j];
			if(largestSum<currentSum) largestSum=currentSum;
		}
	}

	return largestSum;
}


int main(){

	vector<int> arr{1,2,-3,4,5,6,7,8,9};
	cout << subArrSumPrefSum(arr) << endl;

	return 0;
}
