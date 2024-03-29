#include <iostream>

using namespace std;

long long findMin(long long a, long long b){
    long long min;
    if(a>b) min = b;
    else min = a;
    return min;
}

long long findMax(long long a, long long b){
    long long max;
    if(a>b) max = a;
    else max = b;
    return max;
}

long long gcd_naive(long long a, long long b){
    long long min;
    if(a>b) min = b;
    else min = a;

    long long gcd = 1;

    for (long long i = 1; i < min; i++)
        if(a%i==0 && b%i==0) gcd = i;

    return gcd;       
}

long long gcd_eff(long long a, long long b){
    while(1){
        long long minVal = findMin(a,b);
        long long maxVal = findMax(a,b);

        a = maxVal % minVal;
        b = minVal;

        if(a == 0) return b;
        else if(b == 0) return a;
    }
}

int main(int argc, char const *argv[])
{
    long long a,b;
    cin >> a >> b;
    // cout << a << b << endl;

    cout << gcd_eff(a,b) << endl;

    return 0;
}
