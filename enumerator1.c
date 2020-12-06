enum boolean
{
    false,true
};
enum boolean iseven(int x)
{
    if(x%2==0)
        return(true);
    else
        return(false);
}
void main()
{
    int n;
    enum boolean result;
    printf("Enter a number");
    scanf("%d",&n);
    result=iseven(n);
    if(result==true)
        printf("Even Number");
    else
        printf("Odd Number");
    return 0;
}