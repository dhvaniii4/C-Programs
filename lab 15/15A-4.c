#include<stdio.h>
void main(){
	int i,n,s,flag=0;
	printf("Enter array size: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("\nEnter an element into arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	printf("\nEnter an element to search: ");
	scanf("%d",&s);
	for(i=0;i<n;i++){
		if(arr[i]==s){
			flag=1;
		}
	}
	if(flag==1){
		printf("\nNo. found!");
	}
	else{
		printf("\nOops!No. not found");
	}
}