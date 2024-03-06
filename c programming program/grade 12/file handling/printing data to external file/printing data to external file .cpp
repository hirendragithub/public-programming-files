// to print "problem solving in c" in file language.txt using fputs
#include<stdio.h>
main(){
	int a;
	FILE *f;
	f=fopen("language.txt","w");
	fputs("problem solving using c",f);
	fclose(f);
}
