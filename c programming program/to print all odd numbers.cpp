// to print all odd number from 1 to 100
#include <stdio.h>
main(){
	int a,sum=0;
	for(a=1;a<100;a+=2){
		printf("%d\t",a);
		sum=sum+a;
	}
	printf("\nthe total sum is %d",sum);
}
