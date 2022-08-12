#include <iostream>
using namespace std;

// pass by reference by reference variable approach 
void increaseWatchViews(int &views) {
    views ++;
}

// create a pointer variable getting the address
void increaseWatchViewsByPointer(int * views){
    // dereference the pointer value
    // *views ++;
    *views = *views + 1;
}

int main(){

    int views; 
    cout << "Enter the number of views : "; 
    cin >> views; 
    cout << endl;

    increaseWatchViews(views); // views + 1 
    cout << "The increased number of views : " << views << endl; 

    increaseWatchViewsByPointer(&views); // views + 1 + 1
    cout << "The increased number of views : " << views << endl; 

    return 0;

}