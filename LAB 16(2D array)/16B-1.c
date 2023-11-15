//16B-1 Find transpose of a matrix
#include<stdio.h>
void main(){
	int i,j,a[3][3];
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("enter an element into a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nTranspose:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}