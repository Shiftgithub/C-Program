#include<stdio.h>
#include<string.h>
int isValid(string str, int n)
{
    if (!((str[0] >= 'a' && str[0] <= 'z')
            || (str[0] >= 'A' && str[0] <= 'Z')
            || str[0] == '_'))
        return 0;

    for (int i = 1; i < str.length(); i++)
    {
        if (!((str[i] >= 'a' && str[i] <= 'z')
                || (str[i] >= 'A' && str[i] <= 'Z')
                || (str[i] >= '0' && str[i] <= '9')
                || str[i] == '_'))
            return 0;
    }
    return 1;
}
int main()
{
    char str[100];
    printf("Enter an identifier:");

    gets(str);
    int length = strlen(str);

    if (isValid(str, length))
        printf("Valid");
    else
        printf("invalid");

    return 0;
}


