//program to find Factorial of number.
#include<stdio.h>
int main()
{
	int n,i,f=1;
	printf("Enter Any Number :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	f=f*i;				//f=1,f=2 f=6 f=24
	printf("Factorial of %d is %d",n,f);
	return 0;
}
