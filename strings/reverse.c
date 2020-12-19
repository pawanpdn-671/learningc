
#include<stdio.h>
int main()
{
    char s[100];
    int i,j,len=0;
    printf("Enter Any word : ");
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        len+=i;
    }
    printf("The reverse of the word is ");
    for(j=len-1;j>=0;j--)
    {
        printf("%c",s[j]);

    }
    printf("\n");
    return 0;
}