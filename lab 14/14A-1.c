//14A-1: Read n numbers from user & print in normal and reverse order
#include<stdio.h>
void main(){
	int n,i=0;
	printf("Enter no. limit: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{ 										
		printf("\nEnter an element into arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){                                          
		printf("arr[%d]:%d\n",i,arr[i]);
	}
	printf("\nReverse Order:\n");
	for(i=n-1;i>=0;i--){
		printf("arr[%d]:%d\n",i,arr[i]);
	}
}