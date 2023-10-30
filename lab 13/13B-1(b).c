#include<stdio.h>
void main(){
	int i,j;
	for(i=0;i<=5;i++){
		for(j=1;j<=i;j++){
			if(j%2==1)
				printf("1");
			
			if(j%2==0)
				printf("0");
		}
		printf("\n");
	}
}