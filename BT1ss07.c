#include<stdio.h>

int main(){
	int array[6] = {1, 2,3,4,5,6}, length = 0;
	int i;
	for(i=0; i<6; i++){
		printf("Cac phan tu trong mang la: %d\n", array[i]);
		length ++;
	}
	printf("Do dai cua mang la: %d\n", length);
	
	return 0;
}
