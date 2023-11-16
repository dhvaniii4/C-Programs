//18B-3 Find all prime numbers between given interval using functions.
#include<stdio.h>
int listPrime(int);
void main(){
	int j,n1,n2,flag;
	printf("Enter interval to check: ");
	scanf("%d %d",&n1,&n2);
	printf("\nPrime no. between %d and %d are: ",n1,n2);
	for(j=n1;j<=n2;j++)
	{
		flag=listPrime(j);
		if(flag==1){
			printf("\n%d ",j);
		}
	}
}
int listPrime(int n){
	int i,flag=1;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			flag=0;
			break;
		}
	}
	return flag;
}