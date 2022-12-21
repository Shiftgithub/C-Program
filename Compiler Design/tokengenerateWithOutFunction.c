#include<stdio.h>
#include<string.h>
int main()
{
    char str[250];
    int i,l;
   
    printf("Enter a string :");
    gets(str);
   
    l =strlen(str);
    printf("Total length = %d\n",l);
   
    for(i=0 ;i<l ; i++){
        if(str[i]== ' ')
            {
               str[i] ='\n';
            }
    }
    printf("%s",str);
    return 0;
}