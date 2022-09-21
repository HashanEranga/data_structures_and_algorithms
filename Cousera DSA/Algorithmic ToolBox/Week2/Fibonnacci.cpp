#include <iostream>
#include <vector>

using namespace std;

int fibRec(int n){
    if (n<=1)
        return n;
    else 
        return fibRec(n-1) + fibRec(n-2);
}

vector<long long> fibList(int n){
	vector<long long> arr;
	arr.push_back(0);
    arr.push_back(1);

    for (int i = 2; i < arr.size(); i++)
    {   
        arr[i] = arr[i-1] + arr[i-2];
    }
    
    return arr;
}

int main(int argc, char const *argv[])
{
    // find the fibonnaci number of 10
    cout << fibRec(20) << endl;
    // efficient algo will gives the answer with less time
    cout << fibList(100)[99] << endl;

    return 0;
}
