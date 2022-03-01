#include <stdio.h>

int main()
{
    int n=5;
    int i,j,space;
    for(i=1;i<=5;i++){
        for(space=n-1;space>=i;space--){
            printf(" ");
        }
        for(j=1;j<=i;j++){
            if(i%2!=0)//2%2
            printf("%c",i+64);
            else
            printf("%c",i+96);
        }
        printf("\n");
    }
}

