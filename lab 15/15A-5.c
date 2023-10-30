#include<stdio.h>
void main(){
	char ch[10];
	int i,len=1;
	printf("Enter String: ");
	scanf("%s",ch);
	for(i=1;ch[i]!='\0';i++){
		len++;
	}
	printf("\nLength of string is: %d",len);
}