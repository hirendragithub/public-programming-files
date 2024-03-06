//to check weather the given string is palindrom or not 
#include<stdio.h>
#include<string.h>
main(){
	char word[100],b[100];
	printf("enter the word");
	scanf("%s",&word);
	b=strrev(word);
if((strcmp(word,b))==0)
	{
		printf("the string is palindrome");
	}
	else 
	{
		printf("the string is not palindrome");
		
	}
}

