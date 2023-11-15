//17B-3 Add two matrix using pointers.
#include<stdio.h>
void main(){
	int m,n,i,j;
	printf("Enter rows & cols: ");
	scanf("%d %d",&m,&n);
	int a[m][n],b[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter an element into a[%d][%d]: ",i,j);
			scanf("%d",*(a+i))
		}
	}
}