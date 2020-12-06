#include<stdio.h>
int lan(int ch[],int first,int no);
int main()
{
    int arr[100],i,num,add;
    printf("Enter the number of the Elements of te Array : ");
    scanf("%d",&num);
    printf("Enter the elements of the Array : ");
    for (i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    add=lan(arr,0,num);
    printf("The sum of the Array is %d",add);
    return 0;
}
int lan(int ch[],int first,int no)
{
    if(first==no)
    {
        return 0;
    }
    else
    {
        return (ch[first]+lan(ch,first+1,no));
    }
}