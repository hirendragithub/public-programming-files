//to take name age and arrange them in alphabetical order
#include<stdio.h>
#include<string.h>
#include<conio.h>
	struct person
	{
	int age;
	char name[50];
	};
main()
{

  FILE *fp;
  int a,c;
  fp=fopen("info.doc","a");
  printf("enter the total no of data");
  scanf("%d",&a);
   struct person s[a];
      for(int b=0;b<a;b++)
	  {
          printf("\n enter the name of person");
          scanf("%s", s[b].name);
//          printf("\n enter the age of person");
//          scanf("%d",&s[b].age);
       }	
        //to arrange them is ascending order
     for(int i=0;i<a;i++)
     {
	      for(int j=0;j<a;j++)
	      {
	      	if(strcmp(s[i].name,s[j].name)<0)
		    {
		    	struct person temp= s[i];
		   	    s[i]=s[j];
		  	    s[j]=temp;
		  }	      
	     
		 }
     }
//     to write the data in the file
for(int i=0;i<a;i++)
{
	fprintf(fp,"name:%s\n age:%d\n",s[i].name);//,s[i].age 
}
fclose(fp);
}

