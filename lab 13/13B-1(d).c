#include<stdio.h>
void main(){
	int i,j,k,n=5;
	char ch='A';
	for(i=1;i<=n;i++){
		for(k=1;k<=n-i+1;k++){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			if(i%2==0){
				printf("%c ",ch);
				ch++;
			}
			else{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}