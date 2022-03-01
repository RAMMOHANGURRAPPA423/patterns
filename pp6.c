
#include <stdio.h>

int main()
{
    int n=5,i,j;
    for(i=1;i<=5;i++){
        for(j=n;j>=1;j--){
            if(i>=j)
            printf("*");
            else
            printf(" ");
        }
     printf("\n");
    }
    return 0;
}
