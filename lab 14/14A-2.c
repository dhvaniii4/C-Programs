#include<stdio.h>
void main(){
	int i,n,cp=0,cn=0;
	printf("Enter no. limit: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("\nEnter an element into arr[%d]: ",i);
		scanf("%d",&arr[i]);
		if(arr[i]>=0)
		{
			cp++;
		}
		if(arr[i]<0)
		{
			cn++;
		}
	}
	printf("Positive no: %d",cp);
	printf("\nNegative no: %d",cn);

}