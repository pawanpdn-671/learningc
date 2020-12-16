#include<stdio.h>
void incre(int*);
int main()
{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    incre(&a);
    printf("%d",a);
    return 0;
}
void incre(int *p)
{
    *p=*p+1;
}
