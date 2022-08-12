#include <iostream>

using namespace std;

void printArr(int arr[][4], int rows, int cols){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " "; 
        }
        cout << endl;
    }
}

void spiralPrint(int arr[][4], int rows, int cols){

    int sc = 0;
    int ec = cols - 1;
    int sr = 0;
    int er = rows - 1;

    while(sc<=ec and sr <= er){
        // print the start row
        for (int i = sc; i <= ec; i++)
        {
            cout << arr[sr][i] << " ";
        }

        // print the end col
        for (int  i = sr+1; i <= er; i++)
        {
            if(sc==ec){
                break;
            }
            cout << arr[i][ec] << " ";
        }
        
        // print the end row
        for (int i = ec-1; i >= sc; i--)
        {
            if(sr==er){
                break;
            }
            cout << arr[er][i] << " ";
        }

        // print the start col
        for (int i = er-1; i >= sr+1; i--)
        {
            cout << arr[i][sc] << " ";
        }
        sr++; sc++; er--; ec--;
    }
    cout << endl;
}

int main(int argc, char const *argv[])
{
    int arr[][4] = {
        {1,2,3,4},
        {12,13,14,5},
        {11,16,15,6},
        {10,9,8,7}
    };

    // display array as it is 
    printArr(arr, 4, 4);

    // printing the spiral
    spiralPrint(arr, 4, 4);
    return 0;
}
