//17B-1 Copy one array to another using pointers.
#include<stdio.h>
void main(){
	int n,i;
	printf("enter array size: ");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		printf("Enter an element into a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	printf("Array A: ");
	for(i=0;i<n;i++){
		//printf("Enter an element into a[%d]: ",i);
		printf("%d ",*(a+i));
	}
	printf("\nArray B: ");
	for(i=0;i<n;i++){
		b[i]=a[i];
		printf("%d ",*(b+i));
	}
}