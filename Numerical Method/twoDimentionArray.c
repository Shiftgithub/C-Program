#include<stdio.h>
#include<conio.h>
int main()
{
    int a[3][3],i,j,r1,cl;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Enter the value of position array[%d][%d]: ",i,j);
            scanf("%d",a[i][j]);
        }
    }
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }

}
