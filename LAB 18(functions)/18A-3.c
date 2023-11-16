//18A-3 Count simple interest using function
#include<stdio.h>
void SI(float, float, float);
void main(){
	float p,r,t;
	printf("Enter p,r,t: ");
	scanf("%f %f %f",&p,&r,&t);
	SI(p,r,t);
}
void SI(float p,float r,float t){
	float ans;
	ans=(p*r*t)/100;
	printf("Simple Interest:%f ",ans);
}