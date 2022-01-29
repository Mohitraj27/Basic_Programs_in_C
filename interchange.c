#include <stdio.h>
#include <conio.h>
int main()
{
    printf("Enter the values of C and D ");
    int C, D, temp;
    scanf("%d%d", &C, &D);
    temp = C;
    C = D;
    D = temp;
    printf("Value of C is %d and value of D is %d.", C, D);
    return 0;}
    /*page no 41 yashwant kanethkar 
 question no f*/