//to print the highest number in nth terms 
#include<stdio.h>
main (){
	int num[100],i,j,a;
	printf("enter the number of integerrs ");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
		printf("enter  %d integer ",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<=a;i++)
	{
		if(num[0]<num[i])
		{
			num[0]=num[i];
		}
	}
	printf("the greatest number is %d ",num[0]);		
}
