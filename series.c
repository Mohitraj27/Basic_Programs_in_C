//Question no 1
#include<stdio.h>
int main()
{
    int num,sum,sum1=0,i,j;
    printf("Enter value for n ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {sum = 0;
    for(j=1;j<=i;j++)
    {sum=sum+j;
    }sum1=sum1+sum;}
    printf("\n The sum of series upto value[%d] = [%d]\n",num,sum1);
    return 0;
}

