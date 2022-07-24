#include <iostream>
using namespace std;

void print2dArr(int arr[][100], int rows, int cols);
int main(){

    // creating an 2d array 
    int arr[100][100];
    int rows = 3;
    int cols = 3;

    cout << "Enter values for the array" << endl;
    // input values to an array 
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin >> arr[i][j];
        }
    }

    // display items in an array
    cout << "Array elements are " << endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << " " ;
        }
        cout << endl;
    }
    cout << endl;

    // passing an array into a function
    print2dArr(arr, rows, cols);
    return 0;
}

void print2dArr(int arr[][100], int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}