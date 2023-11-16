//18B-1 Generate Fibonacci series of N given number using function name fibbo().
#include<stdio.h>
void fibbo(int,int);
void main(){
	int first=0,second=1;
	fibbo(first,second);
	
}
void fibbo(int a,int b){
	int i=0,s=0;
	printf("Fibonacci series:\n");
	for(i=0;i<20;i++){
		s=a+b;
		a=b;
		b=s;
		printf("%d ",s);	
	}
	return;
}