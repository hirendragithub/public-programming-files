//recurssive function to find factorialof number 
#include<stdio.h>
int sum(int n);
int n,s=0,ans;
main(){
	printf("enter the number");
	scanf("%d",&n);
	ans=sum(n);
	printf("\n the factorial is %d",ans);
}
int sum(int n){
	if(n!=0){
		s=n*sum(n-1);
	}
	else{
		return s;
	}
}
//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong//wrong
