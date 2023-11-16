//18A-2 find max and min b/w two no. using function
#include<stdio.h>
int max(int, int);
int min(int, int);
void main(){
	int a,b,maximum,minimum;
	printf("Enter 2 nos. a & b: ");
	scanf("%d %d",&a,&b);
	max(a,b);
	min(a,b);
	printf("Max is %d\n",max(a,b));
	printf("Min is %d",min(a,b));
}
int max(int a, int b){
	if(a>b){
		return a;
	}
	else
	{
		return b;
	}
}
int min(int a,int b){
	if(a<b){
		return a;
	}
	else{
		return b;
	}
}
