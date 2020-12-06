#define ACTION(a,b) a##b+a*b
main()
{
    printf("%d",ACTION(3,4));
    return 0;
}