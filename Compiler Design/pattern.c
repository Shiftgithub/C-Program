
#include<stdio.h>
#include<string.h>

void pattern_search(char* pat, char* txt);

int main()
{
    char txt[63],pat[63];

    printf("Enter a string : ");
    gets(txt);

    printf("Enter a pattern : ");
    gets(pat);

    pattern_search(pat, txt);

    return 0;
}
void pattern_search(char* pat, char* txt)
{
    int i,j,p,t;

    p = strlen(pat);
    t = strlen(txt);

    printf("String Length : %d\n",t);
    printf("Pattern Length : %d\n",p);

    for(i = 0; i <= t-p; i++)
    {
        for(j = 0; j < p; j++)
        {
            if(txt[i+j] != pat[j])
                break;
        }
        if(j == p)
        {
            printf("Pattern found at index %d\n",i+1);
        }
    }
}
