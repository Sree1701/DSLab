#include<stdio.h>
int main(){
	int n, i, max, num;
	printf("Enterrr number of elements:");
	scanf("%d", & n);
	scanf("%d", & max);
	for(i=1;i<n;i++){
		scanf("%d", & num);
		if(num > max){
			max= num;
		}
	}
	printf("Maximum element: %d \n" , max);
	return 0;
}
