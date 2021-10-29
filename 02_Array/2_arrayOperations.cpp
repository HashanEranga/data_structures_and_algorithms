#include <iostream>
using namespace std;

int main(){

    // creating an array called students
    int marks[100];

    // getting the marks
    int n;
    cout << "Enter the number of students : ";
    cin >> n;

    // input 
    for (int i=0;i<n;i++){
        cout << "Enter marks for the student " << i << " : ";
        cin >> marks[i];
    }

    // output 
    for (int i=0;i<n;i++){
        cout << "Marks of the student " << i << " = " << marks[i] << endl;
    }

    // assign values to an array using the following 
    // can be update the values as well
    marks[0] = 100;

    // marks is not initialized using initializing array therefore there will be garbage values for the remaining items in the aray
    for(int i=0;i<100;i++){
        cout << marks[i] << ",";
    }
    cout << endl;
    
    // if the marks initialize as marks2 all the remaining values will be 0
    int marks2[100] = {0};

    for(int i=0;i<100;i++)
        cout << marks2[i] << ", ";

    cout << endl;
    return 0;
}