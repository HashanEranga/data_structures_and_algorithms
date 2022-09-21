#include <iostream>
#include <gmp.h>

using namespace std;

long long fibEfficient(int n){

    long long arr[n];
    arr[0] = 1;
    arr[1] = 1;
    
    for (int i = 2; i < n; i++)
    {
        arr[i] = arr[i-1] + arr[i-2];
    }
    
    return arr[n-1];
    
}

short int lastBitFib(int number){
    return fibEfficient(number) % 10;
}

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;

    cout << lastBitFib(n) << endl;
    return 0;
}
