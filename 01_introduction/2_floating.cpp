#include <bits/stdc++.h>

using namespace std;

int main(){
    
    // double and long double 
    double a = 10/3;
    cout << a << endl;

    long double b = 10/3;
    cout << b << endl;
    
    // if floating decimals are specified
    double x = 0.23566465468787;
    printf("%.9f\n",x);

    // deviation from the common answer using double 
    double d = 0.3 * 3 + 0.1;
    printf("%.20f\n",d);

    // the way how two numbers are compared
    double e = 0.3 * 3 + 0.1;
    double f = 0.3 * 2 + 0.3 + 0.1;

    // not advisable method
    if(e==f)
        cout << "equal" << endl;
    else
        cout << "different" << endl;

    // best practice 
    if(abs(e-f) < 1e-9)
        cout << "equal" << endl;
    else
        cout << "different" << endl;

    return 0;
}

/* 

Note :
    in cp usual data type for floating point numbers are doulbe 
    which is 64 bits but there is long double in c++ it is more 
    accurate than the usual double.

    if the required precision is given in  the problem as a statemen 
    the easiest way is to output the answer as printf function
    ex: 
        printf("%.9f\n",x);

    the difficulty is the using floating point numbers is that some 
    numbers cannot be represented accurately as floating point numbers.
    When in the floating point notation there will be rounding off errors.
    ex: 
        double x = 0.3*3+0.1;
        printf("%.20f\n");
    dur to rounding error the answer is less than one

    therefore it is risky to compare double (floating point numbers with == operator)
    because the values are equal but they are not because of the precision errors.

    The method to compare floating point numbers are taking their difference and take the 
    answer and compare if the answer is less than epsilon which is a machine constant 10^-9
    the smallest different that a machine can understand

    ex: 
        if(abs(a-b) < 1e-9){
            // then a and b are equal
        }

    floating point numbers are inaccurate. integers up to a certain limi can still be present all
    integers are whole absolute values is at most 2^53
 */