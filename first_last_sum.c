#include<stdio.h>
int main()
{
    int num,f,l,sum;
    printf("enter any four digit number");
    scanf("%d",&num);
    f = (num / 1000);
   
sum = f + (num % 10 );

printf(" sum of 1st and last digit of a number =  %d", sum); 
}
/*page no 41 yashwant kanethkar 
 question no i*/