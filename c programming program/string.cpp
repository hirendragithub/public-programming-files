//string function full detail of string function 
//point to remember : if the string has multi character then %s and if string has single character then %c
//if character is single then using ''(single quote) if character has multi word then using ""(double quote)
#include<stdio.h>
#include<string.h>
 main()
{
	char a[20];
	int n;
	printf("enter character : ");
	scanf("%s",a);
     if ( a == "defination_of_string" )
     {
     	printf("\nstring function are the library function to maniculate string values and execute under string header");
	 }
	 else {
	 	printf("\n");
	 	
	 }
////	strlen ()function is used to count number of character 
//    n= strlen(a);
//    printf("the length of the word is %d",n);
////    strlwr() function is used to convert character into lower case
//    printf("\nthe word in lower case is : %s",strlwr(a));
////  strupr() function is used to convert string into upper case
//    printf("\nthe word in upper case is : %s",strupr(a));
////	 string function are the library function to maniculate string values and execute under string header
	}
