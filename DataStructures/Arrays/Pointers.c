#include <stdlib.h>
#include <stdio.h>

int main(){
    // Defintion of an array
    int a[] = {6,2,3,6,8};

    // Creating a pointer  that containes integer datatype p contains a hexadecimal number;
    int * p;

    int b = 10;

    // Addressing Operator p saves the address of b
    p = &b;

    // this prints over the integer pointer of b
    printf("%d\n", p); 
    printf("%d\n", &b);
    printf("%p\n", p);
    printf("%p\n", &b);

    // This is possible because a referes to an address of the first element in the array
    int * q = a; 
    printf("%d\n", q);
    q++;
    printf("%d\n", q);

    // this wont save the address of the variable b 
    // p = b; this cannot be done because 
    // * is the dereferencing operator in a variable it dereferences its value

    printf("%d\n", *p);

    char c[] = {'e','r','w','q'};
    char * ptr = c;
    printf("%d\n", ptr);
    ptr++;
    printf("%d\n", ptr);

    // ptr = &c is the same
    //  q!=&q; is not equal because that assigned to another pointer in the C array

    //  Accessing the elements by its pointer
    printf("%d\n", a[2]);
    printf("%d\n", *(a+2));
    printf("%d\n", 2[a]);
    printf("%d\n", *(2+a));

    // using *p 
    printf("%d\n", a); // This shows the array first element address but &a refers to the address of the whoole array but having a differ meaning
    printf("%d\n", a+1); // This just rpresents the next element in the array
    printf("%d\n", &a[0]+1); //Same as a+1
    printf("%d\n", &a+1); // this represents the &a whole address of the array then it referes the location after the whole array is over
    printf("%d\n", *a+1); // increase the first value(6) by one 6+1=7

    // 2 Dimentional arrays

    // declaration
    int s[3]; // one dimentional array
    int r[3][4]; //Creating set of one dimentional arrays

    // assign values to the arrays
    int array1[2][3] = {1,2,3,4,5,6};
    int array2[2][3] = {{1,2,3}, {4,5,6}};    

    // No need to define the number of array on the 2 dientional array 
    int array3[][3] = {1,2,3,4,5,6};

    // Further we can define an array in the runtime. 
    // int array4[2][3];
    // for(int i=0; i<2; i++){
    //     for(int j =0; j<3; j++)
    //         scanf("%d", &array4[i][j]);
    // }

    // for(int i=0; i<2; i++){
    //     for(int j=0; j<3; j++){
    //         printf("%d\n", array4[i][j]);
    //     }
    // }

    // How data stored in the array
    // Row major
    // address of [i][j] in row Major 
    //      a[i][j] = baseaddress + ((i*n)+j)*size
            // n is number of columns

    // Column Major 
    // Address of the [i][j] in column major 
    //      a[i][j] = baseAddress + ((j*m)+i)*size
            // m is the number of columns


    //  pointers in 2 dimentional arrays
    int array5[3][3] = {5,2,3,5,6,7,2,3,5};

    int *pointer;

    pointer = *array5;
    printf("%d\n", pointer);
    pointer = *array5 + 1;
    printf("%d\n", pointer);

    pointer = *array5;
    printf("%d\n", pointer);
    pointer = *(array5+1);
    printf("%d\n", pointer);
    
    int cint = **array5;
    printf("%d\n", cint);
    pointer++;
    printf("%d\n", pointer);

    // a[i][j] = *(*(a+i)+j)
    //  a[i][j] = *(a[i]+j) = *(p[i]+j)
    // **a = **p = 6

    pointer = &array5;
    printf("%d\n", pointer);
    pointer = *(array5+1);
    printf("%d\n", pointer);
    

    return 0;
}