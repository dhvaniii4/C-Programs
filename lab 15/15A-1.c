#include<stdio.h>
void main(){
	int n,i;
	printf("Enter array size: ");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		printf("Enter an element into a[%d]: ",i);
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	printf("\nArray b:");
	for(i=0;i<n;i++){
		printf("%d\n",b[i]);
	}
}