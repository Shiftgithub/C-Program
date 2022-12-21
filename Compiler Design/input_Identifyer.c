#include<stdio.h>
#include<string.h>
int main()
{
    char id[63];
    int i,count = 1,flag = 0,L;

    printf("Enter an identifier: "); // input from user
    gets(id);

    L=strlen(id); // length counting

    printf("length = %d \n",L);

    if ((id[0] >= 'a' && id[0] <= 'z') || (id[0]>='A' && id[0] <= 'Z') || (id[0] == '_'))
    {
        for(i = 1; i < L; i++)
        {
            if(id[i]== ' ')
            {
                flag= 1;
                break;
            }
            else if((id[i]>='a' && id[i] <= 'z')||(id[i]>='A' && id[i] <= 'Z')||(id[i] == '_')||(id[i] <= '0' && id[i] <= '9'))
            {
                count++;
            }
        }
        if(count == L)
        {
            flag = 0;
        }
        else
        {
            flag = 1;
        }
    }
    else
    {
        flag = 1;
    }

    if(flag == 1)
    {
        printf("%s is a invalid identifier",id);
    }
    else if(flag == 0)
    {
        printf("%s is a Valid identifier",id);
    }
    return 0;
}
