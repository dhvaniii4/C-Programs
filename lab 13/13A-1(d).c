#include<stdio.h>
void main(){
	int i,j,ls;           //ls=left space
	for(i=1;i<=5;i++){
		for(ls=5;ls>i;ls--){
			printf(" ");
		}
		for(j=1;j<=i;j++){
			printf("%d ",j);
		}
		printf("\n");
	}
}