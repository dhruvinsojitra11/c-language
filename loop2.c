#include<stdio.h>
void myloop()
{
    int j,k;
    char ch;

    for(j='A';j<='E';j++)
    {
        for(k='A';k<='E';k++)
        {
            printf("%c",j );
        }
        printf("\n");
    }  
}

   int main()
{
    myloop();
    return 0;
} 