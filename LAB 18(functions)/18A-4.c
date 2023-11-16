//18A-4 Return the maximum of three floating-point numbers.
#include<stdio.h>
float max3(float, float, float);
void main(){
	float a,b,c,res=0;
	printf("Enter 3 floating point numbers: ");
	scanf("%f %f %f",&a,&b,&c);
	res=max3(a,b,c);
	printf("Maximum out of 3 is: %f",res);
}
float max3(float a, float b, float c){
	if(a>b){
		if(a>c){
			return a;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if(b>c){
			return b;
			}
		else{
			return c;
			}
	}
}