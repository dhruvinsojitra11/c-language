#include<stdio.h>

void mymark()
{
    int sci=96,maths=98,eng=87,total;
    float per;
    total=sci+maths+eng;
    printf("%d\n",total);
    per= total/3;
    printf("%f",per);
}

int main()
{
    mymark();
    return 0;
}