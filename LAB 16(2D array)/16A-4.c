//16A-4 Perform addition of two matrices
#include<stdio.h>
void main(){
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Array A: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter an element into a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nArray B: ");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter an element into b[%d][%d]: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	printf("Sum:\n");
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d\t",c[i][j]);
		}
		printf("\n");
	}
}