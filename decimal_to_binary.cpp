#include<stdio.h>
#define size sizeof(int)*8
int main()
{int n,a[size],i;
scanf("%d",&n);
a[0]=n&1;
for(i=1;i<=31;i++)
{
	a[i]=((n&(1<<i))!=0)?1:0;
}
for(i=size-1;i>=0;i--)
{
	printf("%d",a[i]);
}

 return 0;	
}
