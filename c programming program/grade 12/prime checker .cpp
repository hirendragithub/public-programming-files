//to check  prime number 
#include<stdio.h>
int primenumber();
main()
{
	 primenumber();
}
int primenumber(){
	int a,b,c=0;
	printf("enter the number to check prime no");
	scanf("%d",&a);
	for(b=1;b<=a;b++)
	{
		if(a%b ==0)
		c++;
		if(c==2)
		{printf("the number is prime no ");}
		else
		{printf("the entered no is not a prime number %d\n",b);}
	}
	return 0;
}
