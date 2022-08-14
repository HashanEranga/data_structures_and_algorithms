#include <iostream>
#include "vector.h"
using namespace std;


int main(){

    Vector<int> v;
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(int i=0;i<v.size();i++){
        cout << v[i] << endl;
    }

    Vector<float> v2;
    v2.push_back(23.3);
    v2.push_back(232.2);
    v2.push_back(45.3);
    for(int i=0;i<v2.size();i++){
        cout << v2[i] << endl;
    }

    return 0;
}