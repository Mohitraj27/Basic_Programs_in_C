#include<stdio.h>
int main()
{
    int w,q ,p,r,s,t;
    printf("enter any five digit number");
    scanf("%d",&w);
    q=w%10;
    p = q % 10;
    r = p %10;
    s= r%10;
    t = p+r+s+q;
    printf("sum of its digits %d",t);

}
/* page no - 41 yashwant kanekar
problem no g*/