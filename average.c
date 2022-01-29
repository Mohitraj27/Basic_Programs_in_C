#include<stdio.h>
int main()
{
    int m1,m2,m3,m4;
    int average;
    printf("enter your 1st marks");
    scanf("%d",&m1);
    printf("Enter your 2nd marks");
    scanf("%d",&m2);
    printf("Enter your 3rd marks");
    scanf("%d",&m3);
    printf("Enter your 4th marks");
    scanf("%d",&m4);
    if(m1 < m2 && m1 < m3 && m1 < m4)
 average = (m2+m3+m4)/3;
  if(m2 < m1 && m2 < m3 && m2 < m4)
 average =  (m1+m3+m4)/3;
 if(m3 < m1 && m3 < m2 && m3 < m4)
 average = (m1+m2+m4)/3;
 if(m4 < m1 && m4 < m2 && m4 < m3)
 average = (m1+m2+m3)/3;
 printf("average of the best three marks : %d",average); 

return 0;


}
/*enter your 1st marks 12
Enter your 2nd marks13
Enter your 3rd marks65
Enter your 4th marks90
average of the best three marks : 56 */