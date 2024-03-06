// to print the words in ascending order 
#include<stdio.h>
main(){
	int array[100], a, b,c, holder;
	printf("enter the no of integers");
	scanf("%d",&a);
	for(c=0;c<a;c++)
	{
		printf("enter the %d no",c+1);
		scanf("%d",&array[c]);
	}
	for(c=0;c<a;c++)
	{
		for(b=0;b<a;b++)
		{
			if (array[c]<array[b])
			{
				holder=array[c];
				array[c]=array[b];
				array[b]=holder;
			}
		}
	}
	printf("\n the numebr in ascending order is\n ");
	for (c=0;c<a;c++)
	{
		printf("%d\t",array[c]);
	}
	
}
