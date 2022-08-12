#include <iostream>
using namespace std;

void printCArr(char arr[][100], int rows);

int main(int argc, char const *argv[])
{
    // this is how c arrays are created 
    char carr[][100] = {
        "one",
        "two",
        "three",
        "hundred"
    };

    printCArr(carr, 4);
    return 0;
}

// method for printing a char array
void printCArr(char arr[][100], int rows){
    
    for (int i = 0; i < rows; i++)
    {
        cout << arr[i]<< endl;
    }
    
}