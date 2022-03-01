#include <stdio.h>

int main()
{
    int n=5,i,j;
    for(i=5;i>=1;i--){
        for(j=5;j>=1;j--){
            if(i>=j)
            printf("*");
            else
            printf(" ");
            
        }
        printf("\n");
    }
return 0;
}
