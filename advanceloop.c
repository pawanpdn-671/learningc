#include<stdio.h>
int main()
{
    int i,j,k;
    int m,n=0;
    printf("Enter an Odd number : ");
    scanf("%d",&m);
    for(i=1;i<=(m/2)+1;i++)
    {
        for(j=1;j<=(m/2)-n;j++)
        {
            printf(" ");
        }
        for(k=m;k<=m+(2*n);k++)
        {
            printf("*");
        }
        printf("\n");
        n++;
    }
    for(i=1;i<=m/2;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=m-(i*2);k++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}