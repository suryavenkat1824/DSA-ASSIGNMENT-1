#include<stdio.h>

int main()
{
    char value[1001];
    scanf("%s",value);
    int i=0,c=0,d=0,temp1=-1,temp2=-1;
    while(value[i]!='\0')
    {
       if( (value[i]>='a' && value[i]<='z') ||(value[i]>='A' &&value[i]<='Z') || (value[i]>='0' && value[i]<='9'))
            c=1;
        else if((value[i]=='-'||value[i]=='_'  ||value[i]=='.'  ||value[i]=='@') && (i!=0 &&value[i+1]!='\0'))
            c=1; 
       
        else
        {
            c=-1;
            break;
        }
        if(value[i]=='@')
        {
            d++;
            temp1=i;
        }
        if(d>1)
        {
            c=-1;
            break;
        }
        if(value[i]=='.')
            temp2=i;
        i++;
    }
    if(temp2-temp1<2)
        c=-1;
    if(c==1)
        printf("Valid Email address\n");
    else
        printf("Invalid Email address\n");
}
