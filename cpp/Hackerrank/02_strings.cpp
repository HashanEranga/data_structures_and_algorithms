#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    // getting two strings 
    string a,b;
    cin >> a;
    cin >> b;

    cout<< a.size() << " " << b.size() << endl;
    cout<< a+b << endl;

    string newA = b.substr(0,1) + a.substr(1);
    string newB = a.substr(0,1) + b.substr(1);
    cout << newA << " " << newB << endl;


    return 0;
}