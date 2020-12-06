#include<stdio.h>
int length(char*);
char* reverse(char*);
int main()
{
    char e[100];
    int i;
    printf("Enter a word\n");
    gets(e);
    printf("%d",length(e));
    printf("\n%s",reverse(e));
    return 0;
}
int length(char *p)
{
    int i;
    for(i=0;*(p+i)!='\0';i++);
    return(i);
}
char *reverse(char*p)
{
    int l,i;
    char t;
    for(l=0;*(p+l)!='\0';l++);
    for(i=0;i<l/2;i++)
    {
        t=*(p+i);
        *(p+i)=*(p+l-1-i);
        *(p+l-1-i)=t;
    }
    return(p);
}