//count no. of even or odd no. from an array of n numbers
#include<stdio.h>
void main(){
	int i,n,ce=0,co=0;
	printf("Enter no. limit: ");
	scanf("%d",&n);int arr[n];
	for(i=0;i<n;i++){
		printf("\nEnter an element into arr[%d]: ",i);
		scanf("%d",&arr[i]);
		if(arr[i]%2==0){
			ce++;
		}
		if(arr[i]%2!=0){
			co++;
		}
}
	printf("\nEven count:%d",ce);
	printf("\nOdd count:%d",co);
}