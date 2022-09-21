#include <iostream>

using namespace std;

int gcd_naive(int a, int b){
    int min;
    if(a>b) min = b;
    else min = a;

    int gcd = 1;

    for (int i = 1; i < min; i++)
        if(a%i==0 || b%i==0) gcd = i;

    return gcd            
}

int main(int argc, char const *argv[])
{
    a,b = 
    return 0;
}
