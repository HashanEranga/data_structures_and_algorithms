#include <stdlib.h>
#include <stdio.h>

void CreateArray(int *ptr,int size);
void DisplayArray(int *ptr,int size);

int main(){
    // Array Definition
    int a[50], size, i;

    // Array implementation Data Structure implementation
    printf("Enter the Number of Elements in the data structure : ");
    scanf("%d", &size);

    // Importing values in the the datastructure
    CreateArray(a, size);
    
    // print the dataset values 
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
        printf("%d", ptr[i]);
}