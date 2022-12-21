#include<stdio.h>
#include<string.h>
int main()
{
    char com[200];
    int i,flag = 0,L;

    printf("Enter a statement:");//single line comment//multiple line comment
    gets(com);
    L=strlen(com);
    printf("Length = %d \n",L);
    if(com[0]=='/')

    {
        if (com[1]=='/')
            printf("It is a single line comment");
        else if (com[1]=='*')
        {

            for(i=2; i<=L; i++)
            {
                if (com[1]=='*'&&com[i+1=='/'])

                {
                    printf("It is a multiple line comment");
                    flag=1;
                    break;
                }
            }
            if (flag==0)
                printf("It is not a comment");
        }
        else
            printf("It is not a comment");
    }
    else
        printf("It is not a comment");
    return 0;
}
