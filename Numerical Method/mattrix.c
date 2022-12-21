#include<stdio.h>
#include<conio.h>

int main()
{
    int a[3][3],i,j;

    for(i=0; i<3; i++)
    {

            printf("Enter mattarix a[%d][%d] : ",i,j);
            scanf("%d",a[i][j]);

    }
    for(i=0; i<3; i++)
    {
            printf("%d\t: ",i,j);
    }
}
