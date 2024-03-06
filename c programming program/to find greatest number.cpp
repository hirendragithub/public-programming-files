// to find the greatest number among 3 
#include <stdio.h>
main(){
	int a,b,c;
	printf("enter any three numbers");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a<b&&b<c||a>b&&b>c)
	{printf("the middle number is %d",b);}
	else if(b<a&&a<c||b>a&&c<a)
	{printf("the middle number is %d",a);
	}	
	else{
		printf("the middle numbr is %d");
	
	}
}


 
 
