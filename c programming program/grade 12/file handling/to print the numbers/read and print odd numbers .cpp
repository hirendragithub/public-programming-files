// to read the number.doc fle and print odd numbers 
#include<stdio.h>
main()
{
	int a,b,c;
	FILE *f;
	f=fopen("number.doc","r");
	while(fscanf(f,"%d",&a)!=EOF){
		if(a%2!=0){
			printf("%d\n",a);
		}	
	}
	fclose(f);
}
