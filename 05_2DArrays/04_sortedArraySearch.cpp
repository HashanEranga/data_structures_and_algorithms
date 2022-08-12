#include <iostream>

using namespace std;

std::pair<int,int> searchLinear(int arr[][100], int rows, int cols, int key){
    for (int row = 0; row < rows; row++)
    {
        for (int col = 0; col < cols; col++)
        {
            if(arr[row][col]==key) return std::make_pair(row, col);
        }
    }

    return std::make_pair(-1,-1);
    
}

std::pair<int,int> searchBinary(int arr[][100], int rows, int cols, int key){
    for (int row = 0; row < rows; row++)
    {
        int s = 0;
        int e = cols-1;
        while(s<=e){
            int m = (s+e)/2;
            if(key == arr[row][m])
                return std::make_pair(row,m);
            else if(key > arr[row][m])
                s = m+1;
            else 
                e = m-1;
        }
    }
    return std::make_pair(-1,-1);
}

pair<int,int> searchStaircase(int arr[][100], int rows, int cols, int key){
    // if exceed the lower and upper bound return -1, -1
    if(arr[0][0] > key or arr[rows-1][cols-1] < key) return std::make_pair(-1,-1);
    
    // create the stair case search
    int row = 0;
    int col = cols-1;

    while(row <= rows-1 and col >=0){
        if (arr[row][col] == key)
            return std::make_pair(row, col);
        else if (arr[row][col] > key)
            col--;
        else
            row++;
    }
    return std::make_pair(-1,-1);

}

int main(int argc, char const *argv[])
{
    int arr[][100] = {
        {10,20,30,40},
        {15,25,35,45},
        {27,29,37,48},
        {32,33,39,50}
    };

    int rows = 4;
    int cols = 4;

    // location of the key
    // pair<int, int> coordinate = searchLinear(arr, rows, cols, 33);
    // pair<int, int> coordinate = searchBinary(arr, rows, cols, 88);
    pair<int, int> coordinate = searchStaircase(arr, rows, cols, 33);
    cout << coordinate.first << " " << coordinate.second << endl;

    return 0;
}

