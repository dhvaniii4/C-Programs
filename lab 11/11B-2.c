//Count frequency of digits in an integer
#include<stdio.h>
void main(){
	int i,n,count=0,rem=0;
	printf("Enter no: ");
	scanf("%d",&n);
	for(i=0;n!=0;i++){
		n=n/10;
		count++;
		
	}
	printf("\nNo. of digits: %d",count);
}