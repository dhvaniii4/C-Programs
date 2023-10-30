//Print all ascii character with their values
#include<stdio.h>
void main(){
	int ch;
	for(ch=0;ch<=127;ch++){
		printf("%d %c\n",ch,ch);
	}
}