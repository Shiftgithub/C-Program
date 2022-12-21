#include<stdio.h>
int main()
{
    int number ;

    printf("Enter a array size : ");
    scanf("%d",&number);
    int index, arr[number];

    for(index=0 ; index<number; index++)
    {
         printf("Enter a array element array[%d]: ",index);
        scanf("%d",&arr[index]);
    }
    for(index=0 ; index<number; index++)
    {
        printf("%d index = %d\n",index,arr[index]);
    }

    return 0;

}
