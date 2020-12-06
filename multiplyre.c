#include<stdio.h>
int java(int ch[],int first,int user);
int main()
{
    int arr[100],i,no,s;
    printf("Enter the number of elements in the Array : ");
    scanf("%d",&no);
    printf("Enter the elements of Array : ");
    for(i=0;i<no;i++)
    {
        scanf("%d",&arr[i]);
    }
    s=java(arr,0,no);
    printf("The sum of the elements of the array is %d",s);
    return 0;
}
int java(int ch[],int first,int user)
{
    if(first<=user)
    {
        return 0;
    }
    else
    {
        return (ch[first]+java(ch,first+1,user));
    }
}

