//Question no 4
#include<stdio.h>
int main()
{
    int x;
    printf("enter your number:\n"); //useer input
    scanf("%d",&x);
    int i,count=0;
    for ( i = x; i > 0; i=i/10)
    {
              count= count+1;
    }
    printf("The number of digits of a number: %d",count);
return 0;
}