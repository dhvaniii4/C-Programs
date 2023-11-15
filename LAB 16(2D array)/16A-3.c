//16A-3 Read & store the rollno. & marks of 20 students using 2D array
#include<stdio.h>
void main(){
	int i,j,r[4][5],m[4][5];
	//For Roll
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("Enter rollno into r[%d][%d]: ",i,j);
			scanf("%d",&r[i][j]);
		}
		printf("\n");
	}
	//For marks
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("Enter an element into m[%d][%d]: ",i,j);
			scanf("%d",&m[i][j]);
		}
		printf("\n");
	}
	printf("\nROLL NO.\t\tMARKS\n");
	for(i=0;i<4;i++){
		for(j=0;j<5;j++){
			printf("%d\t\t\t%d\n",r[i][j],m[i][j]);
		}
	
	}
}
