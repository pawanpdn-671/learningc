#include<stdio.h>
int main()
{
    int s;
    s=add();
    printf("The sum of the two  numbers is %d",s);
    return 0;
}
int add()
{
    int a,b;
    printf("Enter the two numbers");
    scanf("%d%d",&a,&b);
    return(a+b);
}
