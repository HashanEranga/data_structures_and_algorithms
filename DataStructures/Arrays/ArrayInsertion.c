#include <stdlib.h>
#include <stdio.h>

// Array Insertion
// insertion at beginning 
int insertAtBegin(int *ptr, int value, int size);
// insertion at a given postion
int insertAtAny(int *ptr, int value,int position, int size);
// insertion at last
int insertAtLast(int *ptr, int value, int size);

void CreateArray(int *ptr,int size);
void DisplayArray(int *ptr,int size);

int main(){
    int a[50], size;
    printf("Enter the size of the array");
    scanf("%d", &size);

    CreateArray(a, size);
    DisplayArray(a, size);

    size = insertAtBegin(a, 10, size);
    DisplayArray(a, size);

    size = insertAtLast(a, 12, size);
    DisplayArray(a,size);

    size = insertAtAny(a, 23, 2, size);
    DisplayArray(a, size);

    return 0;
}

void CreateArray(int *ptr, int size){
    printf("Input the values stored in the array \n");
    for(int i=0;i<size;i++)
        scanf("%d", &ptr[i]);
}

void DisplayArray(int *ptr, int size){
    printf("Disply the included data in the array \n");
    for(int i=0;i<size;i++)
        printf("%d\n", ptr[i]);
}

int insertAtAny(int *ptr, int value, int position, int size){
    // shift all values upto the current position
    for(int i=size;i>=position;i--)
        ptr[i]=ptr[i-1];
    
    // insert value into the the relevant position
    ptr[position] = value;
    return size + 1;  
}

int insertAtBegin(int *ptr, int value, int size){
    // shift all the element by one 
    for(int i=size;i>0;i--)
        ptr[i]=ptr[i-1];

    // include the value at first
    ptr[0]=value;
    return size + 1;
}

int insertAtLast(int *ptr, int value, int size){
    // add the value at last
    ptr[size] = value;
    return size + 1;
}