#include<stdio.h>
void main(){
	int i,j,ls,n=5;
	for(i=1;i<=n;i++){
		for(ls=1;ls<i;ls++){
			printf(" ");
		}
		for(j=1;j<=n-i+1;j++){
			printf("* ");
		}
		printf("\n");
	}
}