#include <iostream>

using namespace std;

// unsigned long long int fibEfficient(long long int n){

//     unsigned long long int arr[n];
//     arr[0] = 1;
//     arr[1] = 1;
    
//     for (unsigned long long int i = 2; i < n; i++)
//     {
//         arr[i] = arr[i-1] + arr[i-2];
//     }
    
//     return arr[n-1];
    
// }

// int lastBitFib(int number){
//     return fibEfficient(number) % 10;
// }

int lastBitFib(int n){
    int arr[n];
    arr[0] = 1;
    arr[1] = 1;

    for (int i = 0; i < n; i++)
    {
        arr[i] = (arr[i-1]+arr[i-2]) % 10;
    }

    return arr[n-1];
    
}

int main(int argc, char const *argv[])
{
    long long int n;
    cin >> n;

    // cout << fibEfficient(n);
    // cout << lastBitFib(n) << endl;
    cout << lastBitFib(n) << endl;

    return 0;
}
