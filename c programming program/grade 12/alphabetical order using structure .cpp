// to take name age roll of student as per user requirement and print them in alphabetical order 
#include<stdio.h>
#include<string.h>
	struct student
	{
		char name[20];
		int age,roll;
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
		printf("enter the age of student\n");
		scanf("%d",&s[a].age);
		printf("enter the roll of student\n");
		scanf("%d",&s[a].roll);
	}
	for( a=0; a<n;a++)
	{
		for(int b=0;b<=n;b++)
		{
			if(strcmp(s[a].name,s[b].name)<0)
			{
				temp=s[a];
				s[a]=s[b];
				s[b]= temp;
			}
		}
	}
//	to print the data
	printf("the record in ascending order is \n");
	for(a=0;a<n;a++)
	{
		printf("%s\n%d\n%d",s[a].name,s[a].age,s[a].roll);
	}
}
