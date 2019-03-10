#include <stdio.h>
void main() 
{
	int n,k,i,r1=1;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
	    r1=r1*k;
	    if(r1==n)
	    {
	        printf("yes..its the power of %d\n",k);
	        break;
	    }
	}
	if(r1>n)
	{
	    printf("no");
	}
}
