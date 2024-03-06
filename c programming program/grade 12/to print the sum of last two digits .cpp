//to print the sum of last two number 
#include<stdio.h>
main(){
	int a,b,c=0,sum=0,d=1;
	printf("enter the number");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		sum =c+d;
		printf("%d,",sum);
		c=d;
		d=sum;
	}
}
