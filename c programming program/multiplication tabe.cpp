// to make multiplication table 
#include <stdio.h>
main(){
int a,b,c;
printf("enter the number for multiplication");
scanf("%d",&a);
printf("enter the length of multiplication ");
scanf("%d",&b);
for (c=1;c<=b;c++)
printf("%d*%d=%d\n",a,c,a*c);
}
