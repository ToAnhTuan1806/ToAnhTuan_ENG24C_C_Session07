#include<stdio.h>

int main(){
	int array[5] = {2, 3, 4, 7, 10};
	int i, length;
	for(i=0; i<=5; i++){
		if(array[i] % 2 == 0){
			printf("so %d la so chan\n", array[i]);
			length++;
		}
	}
	if(length=0){
		printf("Khong co so chan");
	}
	
	return 0;
}
