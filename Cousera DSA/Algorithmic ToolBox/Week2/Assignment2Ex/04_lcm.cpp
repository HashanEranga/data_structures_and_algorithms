#include <iostream>
using namespace std;

long long int lcm_naive(long long int a, long long int b){
    for (long long int i = 1; i < a*b+1; i++)
    {
        if(i%a == 0 && i%b == 0) return i;
    }

    return a*b;
    
}

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

long long lcm_eff(long long a, long long b){
    return a*b / gcd_eff(a,b);
}

int main(int argc, char const *argv[])
{
    long long int a,b;
    cin >> a >> b;
    // cout << a << b << endl;

    cout << lcm_eff(a,b) << endl;

    return 0;
}
