#include <stdio.h>

void modifyArr(float arr[], int length);

int main(){
	float  x[5] = {2,8,3,9,10};
	modifyArr(x, 5);
	for(int i=0;i<5;i++)
		printf("%f\n", x[i]);
	return 0;
}

void modifyArr(float arr[], int length){
	for(int i=0;i<length;i++)
		arr[i] = arr[i]*110;
}
