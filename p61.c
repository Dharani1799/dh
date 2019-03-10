#include <stdio.h>
void main()
{
    int n,a[10],k,i,s=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	    s=s+a[i];
	}
	if(s==k)
	{
	    printf("yes");
	}
	else
	{
	    printf("no");
	}

}
