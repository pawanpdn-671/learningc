#include<stdio.h>
int subst(char ch[],char arr[],int len1,int len2);
int main()
{
    char ch[100],arr[10];
    int len1=0,len2=0,no,i,j;
    printf("Enter the string : ");
    scanf("%s",ch);
    printf("Enter the two or more substring to find : ");
    scanf("%s",arr);
    for(i=0;ch[i]!='\0';i++)
    {
        len1=len1+1;
    }
    for(j=0;arr[j]!='\0';j++)
    {
        len2=len2+1;
    }
    no=subst(ch,arr,len1,len2);
    if(no==1)
    {
        printf("%s is a substring of %s\n",arr,ch);
    }
    else
    {
        printf("%s is not a substring of %s\n",arr,ch);
    }
    

    return 0;
}
int subst(char ch[],char arr[],int len1,int len2)
{
    int i,j,subs=0;
    for(i=0;i<len1;i++)
    {
        if(arr[subs]==ch[i])
        {
            if(arr[len2-1]==ch[i])
            {
                return 1;
            }
            else
            {
                subs++;
            }
            
        }
    }


}