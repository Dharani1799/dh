#include<stdio.h>
void main() 
{
    char a[100],b[100];
    int flag=0,i,j,c=0;
    printf("Enter the value");
    scanf("%[^\n]",a);
    scanf("%s",b);
    for(i=0;b[i]!='\0';i++)
    {
        flag=0;
        for(j=0;a[j]!='\0';j++)
        {
            if(b[i]==a[j]){
            flag++;}
        }}
        if(flag!=0)
        {
            c++;
        }
            printf("%d",c);
    
}
