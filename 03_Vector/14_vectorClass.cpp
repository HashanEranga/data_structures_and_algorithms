#include <iostream>
using namespace std; 

class Vector{
    // create data mebers
    int *arr;
    int cs;
    int ms;

    // define constructors, destructors and methods
    // vector constructor 
    public :
        Vector() {
            cs = 0;
            ms = 1;
            arr = new int(ms);
        }

    void push_back(int d){
        if(cs==ms){
            // create new array free the exsisting array
            int * oldArr = arr;
            ms = 2*ms;

            int * arr = new int[ms];
            for(int i = 0;i<cs;i++){
                arr[i] = oldArr[i];
            } 
            delete []oldArr;
        }
        arr[cs] = d;
        cs++;
    }

    void pop_back(){
        if(cs>0) cs--;
    }

    bool isEmpty(){
        return cs==0;
    }

    // front element 
    int front(){
        return arr[0];
    } 

    // back element
    int back(){
        return arr[cs-1];
    }

    // at method
    int at(int i){
        return arr[i];
    }

    // size
    int size(){
        return cs;
    }

    // capacity
    int capacity(){
        return ms;
    }

    // operator overload
    int operator[](int i){
        return arr[i];
    }


};

int main(){

    Vector v;
    

    cout << v.size() << endl;
    cout << v.capacity() << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    cout << v.at(4) << endl;

    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";

    }
    cout << endl;

    return 0;
}