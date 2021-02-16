#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // calculating factorial using modulo arithmatics
    long long x = 1;

    long long n = 5;
    long long m = 2;
    
    for (int i = 2; i <= n; i++){
        x = (x+i)%m;
    }

    cout << x%m << "\n";
    
    return 0;
}

/* 

Note :
    in subtraction and addition the remainder can be taken before the operation
    (a+b)mod m = (a mod m + b mod m) mod m
    (a-b)mod m = (a mod m - b mod m) mod m
    (a-b)mod m = (a mod m - b mod m) mod m
    (a.b)mod m = (a mod m . b mod m) mod m
 */