#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three values");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("The greatest of all is %d",a);
        }
        else
        {
            printf("The greatest of the three is %d",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("The greatest of three is %d",b);
        }
        else
        {
            printf("Th greatest of three is %d",c);
        }
    }
    return 0;
}