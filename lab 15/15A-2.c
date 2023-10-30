//Count total no. of neg nos. in array
#include<stdio.h>
void main(){
	int i,n,neg=0;
	printf("Enter array size: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("\nEnter an element into arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		//printf("\n%d ",arr[i]);
		if(arr[i]<0){
		neg++;	
	}
	}
	printf("\nNo. of negative no. are: %d",neg);
}