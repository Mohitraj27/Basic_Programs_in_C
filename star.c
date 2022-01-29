 //Question NO 6
 #include<stdio.h>
int main()
{
    int i, j,t;
    for(i=0;i<=4;i++)
    {
        t=0;
        for(j=0;j<=(4-i);j++)
        {printf(" ");
        }
        while(t<(2*i-1))
        {
            printf("*");
            t++;
        }
        printf("\n");

    }}
    /* OUTPUT 
        *
       ***
      *****
     *******    */