//17A-3
#include<stdio.h>
void main(){
	int a=10,b=5;
	//int *ptra,*ptrb;
	int *ptra = &a;
	int *ptrb = &b;
	printf("value stored in a: %d\n",*ptra);
	printf("value stored in b: %d\n",*ptrb);
	printf("Sum:%d",*ptra + *ptrb);
}