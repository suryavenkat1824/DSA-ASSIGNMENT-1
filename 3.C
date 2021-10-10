#include<stdio.h>

int main()
{
    int r,c;
    scanf("%d %d",&r,&c);
    int a[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            scanf("%d",&a[i][j]);
    }
    int n=r*c;
    int b[n];
    int k=0;
    printf("Given 2D Array is :\n");
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            b[k]=a[i][j];
            k++;
        }
    }
    printf("\nAnswer 1D array is:\n");
    for(int i=0;i<n;i++)
        printf("%d ",b[i]);
}
