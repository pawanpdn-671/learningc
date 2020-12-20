#include<stdio.h>
char main()
{
    char ch[100],c;
    int m,i,len1=0,num=1;
    printf("Enter a string : ");
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        len1=len1+1;
        
    }
    if(len1%2==0)
    {
        for(i=0;i<(len1/2);i++)
        {
            c=ch[i];
            ch[i]=ch[len1-num];
            ch[len1-num]=c;
            num++;
        }
    }
    else
    {
        for(i=0;i<(len1/2);i++)
        {
            c=ch[i];
            ch[i]=ch[len1-num];
            ch[len1-num]=c;
            num++;
        }
    }
    printf("The reverse of the string is ");
    while(ch[m]!='\0')
    {
        printf("%c",ch[m]);
        m++;
    }
    printf("\n");
    
    return 0;
}