// to find middle number 
#include <stdio.h>
main(){
	int a,b,c;
	printf("enter any three numbers ");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a>b&&b>c ||a<b&&b<c ){
	printf("the middle number is =%d",b);
}
	if else(b>a&&a>c ||b<a&&a<c){
		printf("the middle number is %d",a);	
} 
	else{
		printf("the middle number is %d",c);
	}
}
