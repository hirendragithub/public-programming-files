// to print 5,10,15 up to nth term
#include <stdio.h>
main(){
	int a,n,sum=0;
	printf("enter the number ");
	scanf("%d",&n);
	for (a=5;a<=n;a+=5){
	printf("%d\t",a);
	sum= sum+a;
	}
	printf("\nthe sum is %d",sum);
	
}
