#include<iostream>
using namespace std;
int main()
{
	int n,c,first=0,second=1,next;
	int a[20],i,j=0,count=0;
	cout<<"Enter The Number of terms of fibonacci series = ";
	cin>>n;
	cout<<"Terms of fibonacci series are :"<<endl;
	for(c=0;c<n;c++)
	{
		if(c<=1)
		next=c;
		else
		{
			next=first+second;
			first=second;
			second=next;
		}
		cout<<next<<endl;
		if (next-first>1)
		{
			for(i=first+1;i<next;i++)
			{
				a[j]=i;
				count++;
				j++;
			}
		}
	}
	cout<<"Missing numbers of the fibonacci series are : "<<endl;
	for(j=0;j<count;j++)
	cout<<a[j]<<endl;
	return 0;
}
