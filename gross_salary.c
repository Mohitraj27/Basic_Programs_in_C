#include<stdio.h>
int main()
{
    int basic_salary;
    float DA, HRA,GA;
   printf(" enter ramesh basic salary");
   scanf("%d",&basic_salary);
    DA =  0.4*basic_salary;
    HRA = 0.2*basic_salary;
   GA = DA + HRA;
   printf("ramesh gross salary:%f",GA);

}  
/* page no - 41 yashwant kanekar
problem no 1*/