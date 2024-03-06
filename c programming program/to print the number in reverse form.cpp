//to print the number in reverse form
#include<stdio.h>
 main(){
	int a,remainder;
	printf("enter the numbers");
	scanf("%d",&a);
	while(a!=0){
		remainder=a%10;
		a/=10;
		printf("%d",remainder);		
	}
}
