#include<stdio.h>
void myloop()
{
    int j,k;

    for(j=1;j<=5;j++)
    {
        for(k=1;k<=j;k++)
        {
            printf("%c",k+64);
        }
        printf("\n");
    }

    
}

   int main()
{
    myloop();
    return 0;
} 