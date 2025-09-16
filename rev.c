#include <stdio.h>
int main(){
	int arr[5];
	printf("Enter Array Elements:\n");
	for (int i=0; i<5; i++){
		scanf("%d", &arr[i]);
	}
	printf("\n");
	printf("Printing Array Elements in Reverse \n:");
	for (int j=4; j>=0;j--){
		printf("%d",arr[j]);
	}
	printf("\n");
	return 0;
}
