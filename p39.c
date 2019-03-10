#include <stdio.h>
void main()
{
	int n,i,p=2,r=1;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	    r=r*p;
	    if(r==n)
	    {
	        printf("yes");
	        break;
	    }
	    else
	    {
	        continue;
	    }
	}
	if(r!=n)
	{
	    printf("no");
	}
}
