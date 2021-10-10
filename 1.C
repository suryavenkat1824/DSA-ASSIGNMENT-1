#include<stdio.h>

int main()
{
    char value[1001];
    scanf("%s",value);
    int i=0,c=0,d=0;
    while(value[i]!='\0')
    {
        if( value[i]=='.')
        {
            if(value[i+1]!='\0')
            d=1;
            break;
        }
        i++;
        
    }
    if( d==1)
    printf("valid\n");
    else
    printf("invalid\n");
}
