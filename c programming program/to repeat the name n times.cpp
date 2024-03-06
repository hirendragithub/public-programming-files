// to repeat the name n times
#include <stdio.h>
main(){

	int i,n;
	char c[20];
	printf("enter a number");
	scanf("%d",&n);
	printf("enter the name ");
	scanf("%s",c);
	for(i=1;i<=n;i++)
		printf("\t%d.%s",i,c);
    
}
