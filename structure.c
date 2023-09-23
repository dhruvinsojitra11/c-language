#include<stdio.h>

struct student
{
    int no,sci,guj,eng,total;
    float per;
};

int main()
{
    struct student stu[3];

    for(int i=0;i<3;i++)
    {
        printf("enter %d student marks:  \n",i+1);
        printf("enetr sci marks:");
        scanf("%d",&stu[i].sci);
        printf("enetr guj marks:");
        scanf("%d",&stu[i].guj);
        printf("enetr eng marks:");
        scanf("%d",&stu[i].eng);
    

     stu[i].total = stu[i].eng+stu[i].guj+stu[i].sci;
     stu[i].per = stu[i].total/3;
    }

    printf("\nno.\teng\tsci\tguj\ttotal\tper\n");

    for(int i=0;i<3;i++)
    {
        
        printf("%d\t%d\t%d\t%d\t%d\t%f\n",i+1,stu[i].eng,stu[i].sci,stu[i].guj,stu[i].total,stu[i].per);
    }

}