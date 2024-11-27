#include<stdio.h>

int main(){
	int array[5];
	printf("Nhap 5 phan tu vao mang\n");
	int i;
	for(i=0; i<5; i++){
		printf("Nhap phan tu: ");
		scanf("%d", &array[i]);
	}
		printf("Mang duoc nhap la:\n");
		for(i=0; i<5; i++){
			printf("array[%d]=%d\n", i, array[i]);
		}
	
	return 0;
}
