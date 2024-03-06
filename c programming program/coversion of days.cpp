//WAP to to convert days into year months weeks days 
#include <stdio.h>
main (){
	int d,y,w,m,r,we;
	printf("input number of days");
	scanf("%d",&d);
	y=d/365;
	r=d%365;
	m=r/30;
	we=r%30;
	w=we/7;
	d=we%7;
printf("the ans is=%d:%d:%d:%d",y,m,w,d);
	
}
