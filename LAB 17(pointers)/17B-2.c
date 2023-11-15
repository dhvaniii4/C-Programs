//17B-2  Swap two arrays using pointers.
#include<stdio.h>
void main(){
	int i,n;
	printf("Enter array size: ");
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++){
		printf("Enter an element into a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		printf("Enter an element into b[%d]: ",i);
		scanf("%d",&b[i]);
	}
	printf("Arrays before swap: ");
	printf("\nArrayA: ");
	for(i=0;i<n;i++){
		//printf("Enter an element into a[%d]: ",i);
		printf("%d ",*(a+i));
	}
	printf("\nArrayB:");
	for(i=0;i<n;i++){
		//printf("Enter an element into a[%d]: ",i);
		printf("%d ",*(b+i));
	}
	int t[n];
	for(i=0;i<n;i++){
		*(t+i)=*(a+i);
		*(a+i)=*(b+i);
		*(b+i)=*(t+i);
	}
	printf("\nArrays after swapping: ");
	printf("\nArray A: ");
	for(i=0;i<n;i++){
		printf("%d ",*(a+i));
	}
	printf("\nArray B:");
	for(i=0;i<n;i++){
		printf("%d ",*(b+i));
	}
}