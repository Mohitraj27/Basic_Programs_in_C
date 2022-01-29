#include <stdio.h>
int main() 
{
   //declaring variable
   float salesAmt, commission;
   printf("Enter your Sales Amount: ");
   scanf("%f", &salesAmt);
   
   //calculating commission
   if(salesAmt<=500)
   commission = 0.05*salesAmt;
   if(salesAmt<=2000 && salesAmt>500)
   commission = 35 + (salesAmt-500)*0.10;
   if(salesAmt<=5000 && salesAmt>2000)
   commission = 185 + (salesAmt-2000)*0.12;
   if(salesAmt>5000)
   commission = salesAmt*0.125;
   
   //displaying commission
   printf("Commission on Your Sales : %f", commission);
   return 0;
}
/*Enter your Sales Amount: 250
Commission on Your Sales : 12.500000
Enter your Sales Amount: 5000
Commission on Your Sales : 545.000000
Enter your Sales Amount: 3000
Commission on Your Sales : 305.000000 */