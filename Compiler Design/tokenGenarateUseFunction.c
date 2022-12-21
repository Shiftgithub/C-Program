#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i = 1;
    printf("Enter a string : ");
    gets(str);

    char* piece = strtok(str," ");
    printf("\nValue of piece = %s\n",piece);
    printf("\n");
    while(piece != NULL)
    {
        printf("\t%d = %s\n",i,piece);
        piece = strtok(NULL, " ");
        printf("\n Value of piece = %s\n\n",piece);
        i++;
    }
    return 0;
}
