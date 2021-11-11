#include <iostream>
#include <vector>
#include <bitset>

using namespace std; 

vector<int> reverseArray(vector<int> a){
	int s,e;
	s=0;e=a.size()-1;

	while(s<e){
		swap(a[s],a[e]);
		s+=1;e-=1;
	}

	return a;
}

void printArr(vector<int> a){
	for(int i=0;i<a.size();i++)
		cout << a[i] << " ";
	cout << endl;
}

int main(){
	int arr[] = {1,2,3};
	vector<int> vect;
	vect.assign(arr, arr + sizeof(arr)/sizeof(arr[0]));
	vector<int> ans = reverseArray(vect);
	printArr(ans);
}
