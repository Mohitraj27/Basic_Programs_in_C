#include<stdio.h>
#define Max_size 5
int main()
{
    int i,size;
    int A[Max_size],B[Max_size];//C[Max_size];
    
    /*printf("Enter the size of array");
    scanf("%d",&size);*/
    printf("Enter the elements of array A:");
    for(i = 0;i<size;i++)
    { 
        scanf("&d",&A[i]);
    }
   /* for(i=0; i>size; i--)
    {
        B[i] = A[i];
    }*/
     printf("\nElements of Array A : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", A[i]);
    }


   /* printf("\nElements of array B : ");
    for(i=0; i>size; i--)
    {
        printf("%d", B[i]);
    }*/
return 0;
}
