#include<stdio.h>
int add(int,int);
int main()
{
    int a,b,c;
    printf("Enter the numbers you want to add");
    scanf("%d%d",&a,&b);
    c=add(a,b);
    printf("The sum is %d",c);
    return 0;
}
int add(int x,int y)
{
    int z;
    z=x+y;
    return(z);
}