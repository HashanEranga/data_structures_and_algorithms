#include <iostream>

using namespace std;

// naive algorithm
int fibNaive(int n){
    if (n<=1) return n;
    return fibNaive(n-1) + fibNaive(n-2);
}

// efficient algorithm using immitating the hand computation
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

int main(int argc, char const *argv[])
{
    // getting inputs
    int n;
    cin >> n;

    // answer
    // cout << fibNaive(n) << endl;
    cout << fibEfficient(n) << endl;

    return 0;
}
