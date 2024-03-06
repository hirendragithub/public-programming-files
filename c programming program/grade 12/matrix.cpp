//to take two matrices print and find their sum 
#include<stdio.h>
main()
{
 int matrix[2][2][2],i,j,matrixnum,sum[2][2];
 for(matrixnum=0;matrixnum<2;matrixnum++)
 {
 	printf("enter the int for %d matrix\n",matrixnum+1);
 	for(i=0;i<2;i++)
 	{
 		for(j=0;j<2;j++)
 		{
 			printf("enter the %d %d int",i+1,j+1);
 			scanf("%d",&matrix[matrixnum][i][j]);
		 }
		 printf("\n");
	 }
	 }	
	 // to print
	 
	for(matrixnum=0;matrixnum<2;matrixnum++)
    {
    	printf(" %d matrix\n",matrixnum+1);
    	for(i=0;i<2;i++)
    	{
    		for(j=0;j<2;j++)
    		{
    			printf(" %d ",matrix[matrixnum][i][j]);
    			}
    		printf("\n");
    	}
	 }
	  // Calculate and print the sum of the two matrices
    printf("\nSum of the matrices:\n");
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++) {
            sum[i][j] = matrix[0][i][j] + matrix[1][i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }	
}
