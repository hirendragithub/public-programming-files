// to convert seconds into hour min and second 
#include <stdio.h>
main(){	int ts,hrs,min,sec,r;
	printf("enter total seconds");
	scanf("%d",&ts);
	hrs=ts/3600;
	r=ts%3600;
	min=r/60;
	sec=r%60;
	printf("%d:%d:%d",hrs,min,sec);
}
