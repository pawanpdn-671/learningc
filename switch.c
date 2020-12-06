#include<stdio.h>
int main()
{
    char vowel;
    printf("Enter a character");
    scanf("%c",&vowel);
    switch(vowel)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("%c is a vowel",vowel);
        break;
        default:
            printf("%c is consonant",vowel);
        break;
    }
    return 0;
}