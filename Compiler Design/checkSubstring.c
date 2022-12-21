#include<stdio.h>
#include<string.h>

int CheckSubstring(char firstString[250],char secondString[250]);

int main()
{
    char firstString[250],secondString[250];
    printf("Enter a first string :");
    gets(firstString);
    printf("Enter a second string :");
    gets(secondString);

    if(CheckSubstring(firstString,secondString))
        printf("\n Second string is a substring of the first string.\n");
    else
        printf("\n Second string is not a substring of the first string.\n");

    return 0;
}

int CheckSubstring(char firstString[250],char secondString[250])
{
    int ls,lf,i,j;
    lf = strlen(firstString);
    ls = strlen(secondString);

    if(ls > lf)

        return 0;

    for( i = 0; i < lf; i++)
    {
        j = 0;

        if(firstString[i] == secondString[j])
        {
            while(firstString[i] == secondString[j] && j < ls)
            {
                j++;
                i++;
            }
            if(j == ls)
            {
                return 1;
            }
        }
    }
    return 0 ;
}
