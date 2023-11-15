--//17A-1 Print value and address of a variable(pointer)
#include<stdio.h>
void main(){
	int n=5,*ptr;
	ptr=&n;
	printf("%d %d",ptr,*ptr);
}