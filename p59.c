#include<stdio.h>
void main() {
   char s[100];
   int i,j,l;
   scanf("%d",&l);
   scanf("%s",s);
   for(i=0;i<l;i++)
   {
       for(j=i+1;j<l;j++)
       {
           if(s[i]=='1')
           {
               if(s[j]=='0')
               {
                   printf("1");
                   break;
               }
           }
       }
   }
