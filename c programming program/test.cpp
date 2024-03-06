// to find weather the length of the sie can form a triangle or not
#include <stdio.h>
main(){
	int a,b,c;
	printf("enter sides of triangle");
	scanf("%d,%d,%d",&a,&b,&c);
	if(a+b>c && b+c>a && a+c>b ){
		printf("this can be a triangle \n");
	}	
	else{
	printf("the triangle cannot be formed \n");
	}
	if(a==b==c){
		printf(" and this is a equlateral triangle ");
	}
	else if(a==b||a==c||b==c){
		printf("this is a isosceles triangle");
	}
	else {
		printf(" and this is a scalar triangle");
	}
}
