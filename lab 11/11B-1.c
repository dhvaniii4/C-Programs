//FIBONACCI SERIES
#include<stdio.h>
void main(){
	int i=0,first=0,sec=1,sum=0,n;
	printf("Enter no. of terms: ");
	scanf("%d",&n);
	for(;i<=5;i++){
		sum=first+sec;
		first=sec;
		sec=sum;
		printf("%d+",sum);
	}
	printf("\nSum: %d",sum);
}