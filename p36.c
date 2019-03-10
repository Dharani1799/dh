#include <stdio.h>
void main()
{
	int n,r=0,k,c=0;
	scanf("%d %d",&n,&k);
	while(n!=0)
	{
	    r=n%10;
	    if(r==k)
	    {
	        c++;
	    }
	    n=n/10;
	}
	printf("%d",c);
}
