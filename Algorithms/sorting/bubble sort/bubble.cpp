#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> bubble(vector<int> arr){

	int n = arr.size();

	for(int i=n-1; i>0; i--){

		for(int j=0; j<i;j++){
			if(arr[j]>arr[j+1]){
				swap(arr[j], arr[j+1]);
			}
		}

	}
	return arr;
}

int main()
{
	
	vector<int> arr = {5,4,3,2,1};

	auto arrSorted = bubble(arr);

	for (int elem : arrSorted){
		cout << elem << " ";
	}

	cout << endl;

	return 0;
}