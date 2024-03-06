//to enter name of good price and quantity and giving discount as per the total including vat and using structure 
#include<stdio.h>
struct good{
	int price,quantity,total;
	char name[20];
};
main(){
	int a,n,vat;
	printf("enter the no of item");
	scanf("%d",&n);
	struct good s[n];
	int grand_total=0;
	for(int i=0;i<n;i++)
	{
		printf("enter the nmae  good ,price per piece and quantity :\n");
		scanf("%s %d %d",s[i].name,&s[i].price,&s[i].quantity);
		s[i].total=s[i].price*s[i].quantity;
		grand_total+=s[i].total;
	}
	printf("%d is total\n ",grand_total);
	if(grand_total>=50000)
	{
		printf("discount is 25 percentage \n");
		a=0.25*grand_total;
		grand_total-=a;
	}
	else if(grand_total>=30000)
	{
		printf("discount is 20 percentage \n");
		a=0.20*grand_total;
		grand_total-=a;
	}
	else if(grand_total>=15000)
	{
		printf("discount is 10 percentage \n");
		a=0.10*grand_total;
		grand_total-=a;
	}
	else
	{
		printf("discount is 0 percentage\n");
	}
	printf("  vat 13 percentage\n ");
	 a=0.13*grand_total;
	grand_total+=a;
	printf("grand total is %d",grand_total);
}
//cbat gpt
//#include<stdio.h>
//
//struct good {
//    int price, quantity, total;
//    char name[20];
//};
//
//int main() {
//    int n, a, vat;
//    printf("Enter the number of items: ");
//    scanf("%d", &n);
//    
//    struct good s[n];
//    int grand_total = 0;
//
//    for (int i = 0; i < n; i++) {
//        printf("Enter the name of the %dth good, price per piece, and quantity: \n", i + 1);
//        scanf("%s %d %d", s[i].name, &s[i].price, &s[i].quantity);
//        s[i].total = s[i].price * s[i].quantity;
//        grand_total += s[i].total;
//    }
//
//    printf("%d is the total\n", grand_total);
//
//    if (grand_total >= 50000) {
//        printf("Discount is 25 percentage\n");
//        a = 0.25 * grand_total;
//        grand_total -= a;
//    } else if (grand_total >= 30000) {
//        printf("Discount is 20 percentage\n");
//        a = 0.20 * grand_total;
//        grand_total -= a;
//    } else if (grand_total >= 15000) {
//        printf("Discount is 10 percentage\n");
//        a = 0.10 * grand_total;
//        grand_total -= a;
//    } else {
//        printf("Discount is 0 percentage\n");
//    }
//
//    printf("VAT is 13 percentage\n");
//    a = 0.13 * grand_total;
//    grand_total += a;
//
//    printf("Grand total is %d\n", grand_total);
//
//    return 0;
//}

