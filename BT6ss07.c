#include<stdio.h>

int main(){
	int array[5] = {1, 2, 3, 4, 5};
	int i;
	for(i=0; i<5; i++){
		if(array[i]%2==0){
			printf("%d", array[i]+3);
			
		} else {
			printf("%d", array[i]+2);
		}
	}
	
	return 0;
}
