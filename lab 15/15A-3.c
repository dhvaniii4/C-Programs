#include<stdio.h>
void main(){
	int n,i,cnt=0;
	printf("Enter array size: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("\nEnter an Element into arr[%d]: ",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		if(arr[i]%3==0){
			cnt++;
		}
	}
	printf("\nNumbers divisible by 3 are: %d",cnt);
}