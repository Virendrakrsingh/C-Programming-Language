#include<stdio.h>
void main()
{
int n,i,count=0;
printf("enter the no.");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
count=count+1;
}
}
if(count==1)
printf("the no. %d is prime no.",n);
else
printf("the no. %d is not prime no.",n);
}
