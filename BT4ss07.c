#include<stdio.h>

int main(){
	int n;
	printf("Nhap so phan tu cua mang: ");
	scanf("%d", &n);
	
	int array[n], i;
	printf("Nhap cac phan tu cua mang\n");
	for(i=0; i<n; i++){
		printf("Phan tu %d: ", i);
		scanf("%d", &array[i]);
	}
	for(i=0; i<n; i++){
		printf("array[%d]=%d\n",i,array[i]);
}
	return 0;
}
