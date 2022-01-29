//Question no 5
#include<stdio.h>
int main()
{
    int i , j ,rows, columns,a[10][10],b[10][10],isEqual;
    printf("\n Please Enter no. of rows and columns");
    scanf("%d%d",&i,&j);
    printf("\n Please Enter the first matrix Elements\n");
    for(rows=0;rows<i;rows++)
    {
        for(columns=0;columns<j;columns++)
        {
            scanf("%d",&a[rows][columns]);

        }
    }
    printf("\n please enter the second matrix elements\n");
    for(rows=0;rows<i;rows++)
    {
        for(columns=0;columns<j;columns++)
        {
            scanf("%d",&b[rows][columns]);

        }
    }
    isEqual=1;
    for(rows=0;rows<i;rows++)
    {
        for(columns = 0 ; columns <j;columns++)
        {
            if(a[rows][columns]!=b[rows][columns])
            {
                isEqual=0;
                break;

            }
        }
    }
    if(isEqual==1)
    {
        printf("\n Matrix is Equal to Matrix b");

    }
    else
    {
        printf("\n Matrix a is not equal to matrix b");
    } 
    return 0 ;

}