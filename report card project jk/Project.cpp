#include<stdio.h>
#include<string.h>

void Data_Entry();
void Print();
void Calculation();
void FIle_print();
void File_read();
void ascending_order();
void descending_order();
void ranking();
FILE *fp;

struct student{
	int roll;
	char name[20];
	char sub1[20],sub2[20],sub3[20],sub4[20],sub5[20],sub6[20];
	int mark1,mark2,mark3,mark4,mark5,mark6;
	float percent;
	int total;
	char result[5];
}s[100],temp;

int j,n,i;
main(){
	fp = fopen("data.txt","a");
	do{
		printf("\n---------------");
		printf("\nEnter 1 to continue and 2 to close : ");
		scanf("%d",&n);
		if(n==1)
		{
			Data_Entry();
			Calculation();
			FIle_print();
			Print();
			j++;
		}
	}
	while(n!=2);
	//to print the result
}

void Data_Entry(){
	for(i=0;i<1;i++){
		printf("Enter the details below : \n");
	    printf("Student Roll : ");
	    scanf("%d",&s[i].roll);
	    printf("Student Name : ");
	    scanf("%s",&s[i].name);
	    //input all subjects marks
		//sub1
		printf("Subject 1 Name : ");
	    scanf("%s",&s[i].sub1);
	    printf("%s Marks : ",s[i].sub1);
	    scanf("%d",&s[i].mark1);
	    //sub2
		printf("Subject 2 Name : ");
	    scanf("%s",&s[i].sub2);
	    printf("%s Marks : ",s[i].sub2);
	    scanf("%d",&s[i].mark2);
	    //sub3
		printf("Subject 3 Name : ");
	    scanf("%s",&s[i].sub3);
	    printf("%s Marks : ",s[i].sub3);
	    scanf("%d",&s[i].mark3);
	    //sub4
		printf("Subject 4 Name : ");
	    scanf("%s",&s[i].sub4);
	    printf("%s Marks : ",s[i].sub4);
	    scanf("%d",&s[i].mark4);
	    //sub5
		printf("Subject 5 Name : ");
	    scanf("%s",&s[i].sub5);
	    printf("%s Marks : ",s[i].sub5);
	    scanf("%d",&s[i].mark5);
	    //sub6
		printf("Subject 6 Name : ");
	    scanf("%s",&s[i].sub6);
	    printf("%s Marks : ",s[i].sub6);
	    scanf("%d",&s[i].mark6); 
	}
}

void Calculation(){
	for(i=0; i<1; i++){
		s[i].total = s[i].mark1 + s[i].mark2 + s[i].mark3 + s[i].mark4 + s[i].mark5 + s[i].mark6;
		s[i].percent = ((float)s[i].total / 600) * 100;
		//calculate result
		if(s[i].percent>=90){
			strcpy(s[i].result, "A+");
		}
		else if(s[i].percent>=80){
			strcpy(s[i].result, "A");
		}
		else if(s[i].percent>=70){
			strcpy(s[i].result, "B+");
		}
		else if(s[i].percent>=60){
			strcpy(s[i].result, "B");
		}
		else if(s[i].percent>=50){
			strcpy(s[i].result, "C+");
		}
		else if(s[i].percent>=40){
			strcpy(s[i].result, "C");
		}
		else if(s[i].percent>=35){
			strcpy(s[i].result, "D");
		}
		else{
			strcpy(s[i].result, "NG");
		}
	}
}

void Print(){
	for(i=0; i<1; i++){
	    printf("\n***************************");
		printf("\nStudent Result\n");
	    printf("\nStudent Roll : %d",s[i].roll);
	    printf("\nStudent Name : %s",s[i].name);
	    printf("\nMarks in each subject\n");
	    printf("\n%s : %d",s[i].sub1,s[i].mark1);
	    printf("\n%s : %d",s[i].sub2,s[i].mark2);
	    printf("\n%s : %d",s[i].sub3,s[i].mark3);
	    printf("\n%s : %d",s[i].sub4,s[i].mark4);
	    printf("\n%s : %d",s[i].sub5,s[i].mark5);
	    printf("\n%s : %d",s[i].sub6,s[i].mark6);
	    printf("\nPercentage : %.2f",s[i].percent);
	    printf("\nTotal : %d",s[i].total);
	    printf("\nResult : %s",s[i].result);
	}
}

void FIle_print(){
	for(i=0; i<1; i++){
		fprintf(fp,"\n***************************");
		fprintf(fp,"\nStudent Result\n");
	    fprintf(fp,"\nStudent Roll : %d",s[i].roll);
	    fprintf(fp,"\nStudent Name : %s",s[i].name);
	    fprintf(fp,"\nMarks in each subject\n");
	    fprintf(fp,"\n%s : %d",s[i].sub1,s[i].mark1);
	    fprintf(fp,"\n%s : %d",s[i].sub2,s[i].mark2);
	    fprintf(fp,"\n%s : %d",s[i].sub3,s[i].mark3);
	    fprintf(fp,"\n%s : %d",s[i].sub4,s[i].mark4);
	    fprintf(fp,"\n%s : %d",s[i].sub5,s[i].mark5);
	    fprintf(fp,"\n%s : %d",s[i].sub6,s[i].mark6);
	    fprintf(fp,"\nPercentage : %.2f",s[i].percent);
	    fprintf(fp,"\nTotal : %d",s[i].total);
	    fprintf(fp,"\nResult : %s",s[i].result);
	}
}
void ascending_order()
{
	int a,b;
	printf("the record in ascending order is \n");
	for( a=0; a<n;a++)
	{
		for(int b=0;b<=n;b++)
		{
			if(strcmp(s[a].name,s[b].name)<0)
			{
				temp=s[a];
				s[a]=s[b];
				s[b]= temp;
			}
		}
	}
	
}
void descending_order()
{
	int a,b;
	for( a=0; a<j;a++)
	{
		for(int b=0;b<=j;b++)
		{
			if(strcmp(s[a].name,s[b].name)>0)
			{
				temp=s[a];
				s[a]=s[b];
				s[b]= temp;
			}
		}
	}
}
void ranking()
{
	int a,b;
	for( a=0; a<j;a++)
	{
		for(int b=0;b<=j;b++)
		{
			if(s[a].percent<s[b].percent)
			{
				temp=s[b];
				s[b]=s[a];
				s[a]= temp;
			}
		}
	}
}
