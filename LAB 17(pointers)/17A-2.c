//17A-2 Demonstrate int, float, double and char pointer
#include<stdio.h>
void main(){
	int n=1,*m;
	m=&n;
	char ch='A';
	int *ch1;
	ch1=&ch;
	float p=10.25;
	int *q;
	q=&p;
	printf("Addr in %d: %u",n,*m);
	printf("Addr in %c: %u",ch,*ch1);
	printf("Addr in %f: %u",p,*q);
}