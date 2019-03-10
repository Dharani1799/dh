#include <stdio.h>
#include<string.h>
void main() 
{
	char a[10];
	char k;
	int n,i,c=0;
	scanf("%s %c",a,&k);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	    if(a[i]==k)
	    {
	        c++;
	    }
	}
	printf("%d",c);

}
