#include<stdio.h>

int getmarks()

{
    int eng,guj,maths,total;

    printf("enter eng marks:");
    scanf("%d",&eng);
    printf("enter guj marks:");
    scanf("%d",&guj);
    printf("enter maths marks:");
    scanf("%d",&maths);

    total = eng +guj + maths;

    return total;
}

int calculate(int totalmarks)
{
    int percent= (totalmarks * 100) / 300;
    return percent;
}

void showresult(int totalmarks, int percentage)
{
    printf("marks : %d\n",totalmarks);
    printf("percentage : %d\n",percentage);

    if(percentage < 33)
    {
        printf("you are fail");
    }
    else
    {
        printf("you are pass");
    }

}


int main()

{
    int gettotal = getmarks();
    int getpercent = calculate(gettotal);
    showresult(gettotal,getpercent);
    return 0;
}