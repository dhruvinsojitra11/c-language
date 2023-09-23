#include<stdio.h>
int reverse(int a)
    {
        int b,c=0;
        while(a>0)
        {
            b=a%10;
            c=c*10+b;
            a=a/10;
        }
        return c;
    }
   int main()
   {
        int n;

        printf(" enter number: ");
        scanf("%d",&n);

        int answer=reverse(n);

        printf("ans is:%d",answer);

        return 0;
    }