/*
		* 
		* *
		* * *
		* * * *
		* * * * *
		* * * *
		* * * 
		* *
		*
*/
#include<stdio.h>
int main()
{
	int i,j;
	for (i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j<=i)
			printf("*");
		}
		printf("\n");
	}
	for (i=2;i<=5;i++)
	{
		for (j=1;j<=5;j++)
		{
			if(i<=j) 
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
