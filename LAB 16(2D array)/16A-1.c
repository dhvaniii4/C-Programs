//16A-1 Read values in two dimensional array and print them in matrix form
#include<stdio.h>
void main(){
	int i,j,m,n;
	printf("Enter no. of rows and cols: ");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter an element into arr[%d][%d]: ",i,j);
			scanf("%d",&arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",arr[i][j]);
		}n
		printf("\n");
	}
}