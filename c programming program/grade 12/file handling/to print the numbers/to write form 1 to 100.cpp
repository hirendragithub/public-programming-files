// to write number from 1 to 100 in file number.txt using putw
#include<stdio.h>
main()
{
	int a,b,c;
	FILE *f;
	f=fopen("number.doc","w");
	for(a=1;a<=100;a++){
	fprintf(f,"%d\n",a);
	}
	fclose(f);
}
