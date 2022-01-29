//Question no 2
#include<stdio.h>
int main() 
{
    int num,digits,sum_of_digits =0,temp; //variable declaration
    printf("enter the numbers =");
    scanf("%d",&num); //user input
    temp = num;
    while(num>0) //while loop
   { 
       digits=num%10; //extraction of digits
    sum_of_digits=sum_of_digits+(digits*digits*digits); //sum of extracted digits
    num=num/10;
}
if(temp == sum_of_digits)
printf("Its an armstrong number");
else
printf("not an armstrong number");
    return 0;
}  
