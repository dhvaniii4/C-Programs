//18B-2 Check whether a number is prime, Armstrong or perfect number using functions
#include<stdio.h>
int prime(int);
int perfect(int);
void main(){
	int n;
	printf("Enter no. to check: ");
	scanf("%d",&n);
	if(prime(n)==1){
		printf("Prime no.");
	}
	else{
		printf("Not a prime no.");
	}
	if(perfect(n)==1){
		printf("\nPerfect no.");
	}
	else{
		printf("\nNot a perfect no.");
	}
}
int prime(int n){
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			return 0;
		else
			return 1;
	}
}
int perfect(int n){
	int i,s=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
			s=s+i;
	}
	if(s==n)
		return 1;
	else
		return 0;
}