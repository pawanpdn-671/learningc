#include<stdio.h>
int add(int,int);
void main()
{
    int s,x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    s=add(x,y);
    printf("Sum is %d",s);
    return 0;
}
    int add(int a,int b)
    {
        int c;
        c=a+b;
        return(c);
    }

