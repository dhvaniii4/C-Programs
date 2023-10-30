//Find max,min,sum,avg of given numbers from array
#include<stdio.h>
void main()
{
	int n,i;
	int sum=0;
	printf("Enter array limit: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Enter an element into arr[%d]: ",i);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	int max=arr[0],min=arr[0];
	for(i=0;i<n;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		if(min>arr[i]){
			min=arr[i];
		}
	}
	printf("\nSum:%d",sum);
	printf("\nMaximum:%d",max);
	printf("\nMinimum:%d",min);
	printf("\nAvg:%f",sum/n);
}