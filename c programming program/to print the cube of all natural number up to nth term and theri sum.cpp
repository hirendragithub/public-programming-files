// to print the cube of all natural number up to nth term and theri sum
#include <stdio.h>
main(){
int a,b,sum=0;
printf("enter the number");
scanf("%d",&b);
for(a=1;a<=b;a++){
	printf("%d\t",a*a*a);
	sum=sum+a*a*a;
}	
	printf("\nthe sum is %d",sum);
}
