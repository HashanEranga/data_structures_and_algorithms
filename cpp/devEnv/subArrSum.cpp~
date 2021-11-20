#include <iostream>
#include <vector>

using namespace std; 

int largestSubArrSum(vector<int> arr){
	int largestSum = 0;
	for(int i=0;i<arr.size()-1;i++){
		//cout << "i = " << i << " "; 
		for(int j=i+1;j<arr.size();j++){
			int currentSum = 0;
			//cout << "j = " << j << " "; 
			for(int k=i;k<=j;k++){
				currentSum+=arr[k];
			}
			//cout << "currentSum = " << currentSum << " ";
			largestSum=max(currentSum,largestSum);
		}
		//cout << "largestSum = " << largestSum << " ";
	//cout << endl;
	}
	return largestSum;
}

int main(){
	vector<int> arr{1,2,3,4,5,7,8,9};
	cout << largestSubArrSum(arr);
	return 0;
}
