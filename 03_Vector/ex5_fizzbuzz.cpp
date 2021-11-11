#include <iostream>
#include <string>
#include <vector>

using namespace std;

void showVect(vector<string> vect){
	for(int i=0;i<vect.size();i++){
		cout << vect[i] << endl;
	}
}

vector<string> fizzbuzz(int n){
	vector<string> str;
	for(int i=1;i<=n;i++){
		if(i%3==0 & i%5==0){
			str.push_back("fizzbuzz");
		}
		else if(i%3==0){
			str.push_back("fizz");
		}
		else if(i%5==0){
			str.push_back("buzz");
		}
		else{
			str.push_back(to_string(i));
		}
	}
	return str;
}

int main(){
	vector<string> ans;
	ans = fizzbuzz(15);
	showVect(ans);
	fizzbuzz(21);	
	fizzbuzz(12);
	return 0;
}
