#include <stdio.h>
void main()
{
    int n,i,c=0;
	scanf("%d",&n);
    for(i=2;i<n;i++)
    {
        if(i%2==1 && n%i==0)
        {
            printf("%d",i);
            
        }
    }
}
