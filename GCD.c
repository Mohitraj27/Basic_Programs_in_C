//Question no 7
#include<stdio.h>
int main()
{
    int a,b,min,gcd=1; 
    printf("first number\n"); 
    scanf("%d",&a);
    printf("second number\n"); 
    scanf("%d",&b);
    if (a>b)
        min= b;
    else
        min= a;
    for (int i=1 ; i <= min; i++)
        if (a%i==0 && b%i==0)
            gcd= i;
    printf("GCD is :%d",gcd);
return 0;
}
