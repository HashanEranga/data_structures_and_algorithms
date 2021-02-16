#include <bits/stdc++.h>

using namespace std;

int main(){
    int a = 5;
    long long b = a*a;

    // wrong result produced here
    cout << b << endl;

    long long c = 5;
    b = c*c;

    // produce the right result when all the data in the same datatype
    cout << b << endl;

    return 0;
}

// Notes:
// using int datatype use 32bits 
// using long long 64bit 

// common mistake 
// int a;
// int b;
// long long b = a*a;
// this produce a wrong answer 
// because a*a produces an integer answer 

// make correct as follows 
// by creating the a variable as long long data type