//to find the factorial of the given number
#include<stdio.h>
main()
{
	int a,i,j=1,n;
	printf("enter the factorual number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
			j*=i;
	}
	printf("the factorial no is %d",j);
}
