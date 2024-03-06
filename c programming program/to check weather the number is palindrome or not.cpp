//this code is written by chatgpt
#include <stdio.h>
int main() {
    int n, r, rev = 0, org = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    org = n;
    while (n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
//    if (org % 10 == 0) { // check if original number ends in 0
//        rev = rev * 10; // append 0 to reversed number
//    }
    printf("%d is the reverse form of %d", rev, org);
    if (rev == org) {
        printf("\nThe number is a palindrome");
    } else {
        printf("\nThe number is not a palindrome");
    }
    return 0;
}

////this code is written by me
//
//
////to check weather the number is palindrome or not 
//#include <stdio.h>
//main(){
//	int a,org,remainder,reverse=0;
//	printf("enter the numberto check palindrome or not ");
//	scanf("%d",&a);
//	org=a;
//	while(a!=0){
//		remainder=a%10;
//		reverse=reverse*10+remainder ;
//		a/=10;
//	}
//	printf("%d is the reverse of %d",reverse,a);
//	if(org=reverse){
//		printf("the number is palindrome");
//	}
//	else{
//		printf("the number is not palindrome");
//	}
//}
