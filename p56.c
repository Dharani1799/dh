#include <stdio.h>
#include<string.h>
void main() 
{
	char s[10];
	char k;
	int n,i;
	scanf("%s %c",s,&k);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
	    if(s[i]==k)
	    {
	        printf("%d",i+1);
	        break;
	    }
	}
}
