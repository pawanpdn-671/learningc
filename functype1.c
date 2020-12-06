void add()
{
    int a,b,c;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("Sum of the two numbers is %d",c);
}
#include<stdio.h>
main()
{
    void add(void);
    add();
    return 0;
}