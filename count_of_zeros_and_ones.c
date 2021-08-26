#include<stdio.h>
#define size sizeof(int)*8
void count(int a[])
{
	int c0=0,c1=0,i;
	for(i=0;i<size;i++)
	{
		if(a[i])
		{
			c1++;
		}
		else
		{c0++;
		}
	}
	printf("\ncount of ones and zeros are :%d %d",c1,c0);
	
}
int main()
{int n,a[size],i;
scanf("%d",&n);
for(i=0;i<=31;i++)
{
	a[i]=((n&(1<<i))!=0)?1:0;
}
for(i=size-1;i>=0;i--)
{
	printf("%d",a[i]);
}
count(a);

 return 0;	
}
