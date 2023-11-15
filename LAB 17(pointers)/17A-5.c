//17A-5 Store n elements in an array and print the elements using pointer.
#include<stdio.h>
void main(){
	int n,i;
	printf("Enter array size: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter an element into arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		//printf("Enter an element into arr[%d]: ",i);
		printf("%d\t",*(arr+i));
	}
}