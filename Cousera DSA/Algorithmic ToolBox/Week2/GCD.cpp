#include <iostream>
using namespace std;

int GCDNaive(int a, int b){

    int gcd = 0;
    for (int i = 1; i < a+b; i++)
    {
        if ((a % i == 0) && (b % i == 0) && (i != 0))
            gcd = i;
    }
    
    return gcd;
}

int GCDEuclidean(int a, int b){
    while ((a!=0) or (b!=0))
    {
        /* code */
    }
    
}

int main(int argc, char const *argv[])
{
    cout << GCDNaive(10,4) << endl;
    return 0;
}
