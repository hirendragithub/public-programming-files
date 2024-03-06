// to priitn 100,97,94
#include <stdio.h>
main(){
	int a,sum=0;
	for (a=100;a>=1;a-=3)
	{
	printf("%d\t",a);
		sum= sum+a;
}
	printf("\nthe sum is %d",sum);
}
