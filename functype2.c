#include<stdio.h>
int main()
{
    int a,b;
    void add(int,int);
    printf("Enter the number");
    scanf("%d%d",&a,&b);
    add(a,b);
    return 0;
}
void add(int n,int m)
{
    int c;
    c=n+m;
    printf("Sum is %d",c);
}