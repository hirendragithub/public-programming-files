//to find the addition of the matrix
#include<stdio.h>
main(){
    int matrix1[10][10],matrix2[10][10];
	int a,b,c,d,e,f;
	printf("enter the number of matrix");
	scanf("%d",&e);
	printf("enter the number of rows ");
	scanf("%d",&a);
	printf("enter the number of coloums");
	scanf("%d",&b);
	
	for(f=1;f<=e;f++)
	{
	
//	to input data in matrix
	
	for (c=0;c<a;c++)
	{
		for (d=0;d<b;d++)
		{
			printf("enter  element for position %d  %d :",c+1,d+1);
			scanf("%d",&matrix1[c][d]);
		}
	}
	
//	to print matrix
   for (c=0;c<a;c++)
	{
		for (d=0;d<b;d++)
		{
			printf ("%d\t",matrix1[c][d]);
		}
		printf("\n");
	}
}
//not completed till now
