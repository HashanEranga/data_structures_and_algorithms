#include <stdlib.h>
#include <stdio.h>

// Array deletion
int deleteItem(int *ptr, int position, int size);
int deleteAtBegin(int *ptr, int size);

// Array Insertion
int insertAtBegin(int *ptr, int value, int size);
int insertAtAny(int *ptr, int value,int position, int size);
int insertAtLast(int *ptr, int value, int size);

// Array Manipulation
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

    size = deleteItem(a, 3, size);
    DisplayArray(a,size);

    size = deleteAtBegin(a,size);
    DisplayArray(a,size);
    
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
    size++;
    return size;  
}

int insertAtBegin(int *ptr, int value, int size){
    // shift all the element by one 
    for(int i=size;i>0;i--)
        ptr[i]=ptr[i-1];

    // include the value at first
    ptr[0]=value;
    size++;
    return size;
}

int insertAtLast(int *ptr, int value, int size){
    // add the value at last
    ptr[size] = value;
    size++;
    return size;
}

int deleteItem(int *ptr, int position, int size){
    for(int i=position-1;i<size-1;i++)
        ptr[i]=ptr[i+1];
    size--;
    return size;
}

int deleteAtBegin(int *ptr, int size){
    for(int i=0;i<size-1;i++)
        ptr[i]=ptr[i+1];
    size--;
    return size;
}