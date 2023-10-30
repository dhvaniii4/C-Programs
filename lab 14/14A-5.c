//Read five person height and weight and count the no. of person
#include<stdio.h>
void main()
{
	int i,h[5],w[5],count=0;
	for(i=0;i<5;i++){
		printf("Enter data for %d: ",i+1);
		printf("\nHeight: ");
		scanf("%d",&h[i]);
		printf("\nWeight: ");
		scanf("%d",&w[i]);
	}
	for(i=0;i<5;i++){
		if(h[i]>170 && w[i]<50)
		{
			count++;
		}
	}
	printf("\nNo. of persons are: %d",count);
}