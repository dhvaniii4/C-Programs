//16A-2 Count no. of positive,negative and zero elements from 3x3 matrix
#include<stdio.h>
void main(){
	int i,j,a[3][3],cp=0,cn=0,cz=0;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Enter an element into a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]>0){
				cp++;
			}
			if(a[i][j]<0){
				cn++;
			}
			if(a[i][j]==0){
				cz++;
			}
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			//printf("Enter an element into a[%d][%d]: ",i,j);
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	printf("\nCount of pos,neg & zero: %d %d %d",cp,cn,cz);
}