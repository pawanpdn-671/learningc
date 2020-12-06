#include<stdio.h>
int main()
{
    int gr,i,take;
    printf("Enter Your Date of Birth");
    printf("\nDATE :");
    scanf("%d",&gr);
    printf("\nMONTH :");
    scanf("%d",&i);
    printf("\nYEAR :");
    scanf("%d",&take);
    printf("Your Date of Birth is %d/%d/%d",gr,i,take);
    return 0;
}