#include<stdio.h>
int main()
{
    int i,a[5],*p;
    p=&a[0];
    for(i=0;i<=4;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}