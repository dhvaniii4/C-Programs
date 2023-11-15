//16B-2 Perform Multiplication of two matrices
#include<stdio.h>
void main(){
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Array A: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter element into a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nArray B: \n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter element into b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("\nArray C:\n");
}