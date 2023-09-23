#include<stdio.h>
void myloop()
{
    int j,k;

    for(j=1;j>=5;j++)
    {
        for(k=5;k>=j;k++)
        {
            printf("%d",j);
        }
        printf("\n");
    }

    
}

   int main()
{
    myloop();
    return 0;
} 