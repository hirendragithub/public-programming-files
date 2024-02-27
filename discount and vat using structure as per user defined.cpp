//to make bill as user adds product and calculate vat
#include<stdio.h>
struct good{
	int price,quantity,total;
	char name[20];
};
main(){
	int a,b,n,i=0;
	printf("enter the no of item");
	scanf("%d",&n);
	float vat,grandtotal=0;
	struct good s[n];
	for(i=0;i<n;i++)
	{
		printf("enter the nmae  good ,price per piece and quantity :\n");
		scanf("%s %d %d",s[i].name,&s[i].price,&s[i].quantity);
		s[i].total=s[i].price*s[i].quantity;
		grandtotal+=s[i].total;
	}
		do
		{
			b=0;
		printf("if you want to add more data press 1 if no press 0\n");
		scanf("%d",&b);
			if(b==1)
			{
				struct good s[n+1];
			    printf("enter the nmae  good ,price per piece and quantity :\n");
			    scanf("%s %d %d",s[i+1].name,&s[i+1].price,&s[i+1].quantity);
			    s[i+1].total=s[i+1].price*s[i+1].quantity;
			    grandtotal+=s[i+1].total;
						
			}
		}while(b==1);
		printf("%d\n",i);
	printf("%.2f is total\n ",grandtotal);
	if(grandtotal>=50000)
	{
		printf("discount is 25 percentage \n");
		a=0.25*grandtotal;
		grandtotal-=a;
	}
	else if(grandtotal>=30000)
	{
		printf("discount is 20 percentage \n");
		a=0.20*grandtotal;
		grandtotal-=a;
	}
	else if(grandtotal>=15000)
	{
		printf("discount is 10 percentage \n");
		a=0.10*grandtotal;
		grandtotal-=a;
	}
	else
	{
		printf("discount is 0 percentage\n");
	}
	printf("  vat 13 percentage\n ");
	 vat=0.13*grandtotal;
	grandtotal+=vat;
	printf("grand total is %f",grandtotal);
}
