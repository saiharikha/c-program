#include <stdio.h>
#include<conio.h>
void main()
{  int i,j,k,n;
   printf("enter n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {   for(j=1;j<=n-i;j++)
       {  printf(" ");
       }
       k=i;
       for(j=1;j<i+1;j++)
       {   printf("%d",k);
           k++;
       }
       for(j=(2*i)-2;j>=i;j--)
       {
             printf("%d",j);
       }
       printf("\n");
    }

}