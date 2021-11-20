#include <iostream>
#include <vector>

using namespace std;

bool binarySearch(vector<int> arr, int elem){

	int start,end,mid;

	start=0; end=arr.size()-1;

	while(start <= end){
		mid =(start+end)/2;
		if(arr[mid]==elem) return true;

		else if(arr[mid]>elem) end=mid-1;

		else start  = mid+1;

	}
	return false;
}

int main(){

	vector<int> arr{1,2,3,4,5,6,7,8,9};
	int elem = 333;

	string  ans = binarySearch(arr,elem) ? "Found" : "NotFound";
	cout << ans << endl;

	return 0;
}
