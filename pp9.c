#include <stdio.h>

int main()
{
   int r=9;
   int i,j,m=1,n=9;
   for(i=1;i<=r;i++){
       for(j=1;j<=r;j++){
           if((j>=m&&j<=n)||(j>=n&&j<=m))
           printf("*");
           else
           printf(" ");
       }
       printf("\n");
       m++;
       n--;
   }
return 0;
}
