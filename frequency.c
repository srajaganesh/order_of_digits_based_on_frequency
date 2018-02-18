#include<stdio.h>
#include<string.h>

int main()
{
    char s[100];
    scanf("%s",s);
    int i,j,count[10],t,a[10],d;
   
   for(i=0;i<=9;i++)
     count[i]=0;    
   
   for(i=0;i<strlen(s);i++)
     count[s[i]-'0']++;      

   for(i=0;i<=9;i++)
     a[i]=count[i];               
   
   for(i=0;i<=9;i++)
     {
        for(j=i+1;j<=9;j++)
         {
           if(a[i]<a[j])
           {
             int t=a[i];
             a[i]=a[j];
             a[j]=t;          
           }
         }
      }
     
   for(i=9;i>=0;i--)
    {
    if(a[i]==a[i-1]==1)
      a[i]=0;               
    } 
   
   for(i=0;i<=9;i++)
    {
      for(j=0;j<=9;j++)
       {
         if (a[i]== count[j])
          {
           d=count[j];
           while(d!=0)
           {
              printf("%d",j);
              d--;
           }
   
         }
        }
     }
return 0; 
}
