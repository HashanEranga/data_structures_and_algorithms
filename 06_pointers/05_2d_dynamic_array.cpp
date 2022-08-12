#include <iostream>
using namespace std;

int** createDynamic2DArray(int rows, int cols){
    // create array of pointers
    int ** arr = new int*[rows];

    // allocate memory for each row
    for(int i=0;i < rows; i++){
        arr[i] = new int[cols];
    }

    int value = 0;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            arr[i][j] = value;
            value++;
        }
    }

    return arr;
}


int main(){

    // creating an array 2d need create dynamically row by row
    // each of pointers of the each rows are stored in an one array

    int rows, cols;
    cin>>rows>>cols;

    int ** arr = createDynamic2DArray(rows, cols);

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}