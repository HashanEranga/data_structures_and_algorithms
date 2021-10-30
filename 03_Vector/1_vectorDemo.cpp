#include<iostream>
#include<vector>

using namespace std;

int main(int argc, char const *argv[])
{
    // Demo vector
    // vector <int> arr = {1,2,3};

    // fill constructor
    vector <int> arr2(10,7);

    // print all the elements inside a vector
    for(int i=0;i<arr2.size();i++)
        cout << arr2[i] << " ";
    cout << endl;


    // last element removed 
    arr2.pop_back();

    // append operation
    arr2.push_back(12);

    // print all the elements inside a vector
    for(int i=0;i<arr2.size();i++)
        cout << arr2[i] << " ";
    cout << endl;

    return 0;
}
