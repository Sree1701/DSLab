#include <stdio.h>
int main(){
	int n1,n2,i,j;
	printf("Enter size of first array:");
	scanf("%d",&n1);
	int arr[n1];
	printf("Enter elements of first array: \n");
	for(i=0;i<n1;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter size of second array:");
        scanf("%d",&n2);
        int arr[n2];
        printf("Enter elements of second  array: \n");
        for(i=0;i<n1;i++){
                scanf("%d",&arr2[i]);
        } 
	int merged[n1 + n2];
	for(i=0;i<n1;i++){
		merged[i]=arr[i];
	}
	for(j=0;j<n2;j++){
		merged[i+j]=arr2[j];
	}
	printf("Merged Array: \n");
	for(i=0; i<n1 + n2;i++){
		printf(" %d ", merged[i]);
	}
	return 0;
}
