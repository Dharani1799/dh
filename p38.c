#include <stdio.h>
void main() 
{
	int n,j;
	scanf("%d",&n);
	for(j=2;j<=n;j++)
	{
	    if( j%2==0 && n%j==0)
	    {
	        printf("%d ",j);
	    }
	}
}
