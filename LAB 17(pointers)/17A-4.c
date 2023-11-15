//17A-4Swap value of two numbers using pointer
#include<stdio.h>
void main(){
	int a,b;
	a=5;
	b=10;
	int *ptra = &a;
	int *ptrb = &b;
	int temp=0;
	temp=*ptra;
	*ptra=*ptrb;
	*ptrb=temp;
	printf("Values of a & b are:%d %d ",*ptra,*ptrb);
}