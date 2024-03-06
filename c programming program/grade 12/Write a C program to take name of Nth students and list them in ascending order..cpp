//Write a C program to take name of Nth students and list them in ascending order.
#include<stdio.h>
#include<string.h>
	struct student
	{
		char name[20];
	}s[100],temp;
main()
{
	int n,a;
	printf("enter the numboer of students\n");
	scanf("%d",&n);
	for( a=0;a<n;a++)
	{
		printf("enter the name of student\n");
		scanf("%s",s[a].name);
	}
	for( a=0; a<n;a++)
	{
		for(int b=0;b<=n;b++)
		{
			if(strcmp(s[a].name,s[b].name)<0)
			{
				temp=s[b];
				s[b]=s[a];
				s[a]= temp;
			}
		}
	}
//	to print the data
	printf("the record in ascending order is \n");
	for(a=0;a<n;a++)
	{
		printf("%s\n",s[a].name);
	}
}
