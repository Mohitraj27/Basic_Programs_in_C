#include<stdio.h>
int main()
{
    int D;
    float meter,feet,inches,cm;
    printf("enter the distance between two cities in km");
    scanf("%d", &D);
    meter = D*1000;
    feet = D*3280;
    inches = D*39370.07874015748;
    cm = D*100000;
    printf("%f\n",meter);
    printf("%f\n",feet);
    printf("%f\n",inches);
    printf("%f\n ", cm);
/*page no 41 yashwant kanethkar 
 question no 2*/

}