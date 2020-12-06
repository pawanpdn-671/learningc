#include<stdio.h>
float add(float x,float y);
float sub(float x,float y);
float mul(float x,float y);
float div(float x,float y);
int main()
{
  float a,b,s;
  int choice;
  while(choice!=5)
  {
    printf("Enter two numbers : ");
    scanf("%f %f",&a,&b);
    printf("\n1. +");
    printf("\n2. -");
    printf("\n3. *");
    printf("\n4. /");
    printf("\n5. Exit\n");
    printf("Select an Option: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: s = add(a,b);
                printf("%f\n",s);
                break;
        case 2: s = sub(a,b);
                printf("%f\n",s);
                break;
        case 3: s = mul(a,b);
                printf("%f\n",s);
                break;
        case 4: s = div(a,b);
                printf("%f\n",s);
                break;
                
        default: printf("Exited\n");
    }
      
  }
      return 0;
}
float add(float x,float y)
{
    return x+y;
}
float sub(float x,float y)
{
    float z;
    z=x-y;
    if(z>0)
        return z;
    else
        return (-z);
}
float mul(float x,float y)
{
    float z;
    z=x*y;
    return z;
}
 float div(float x,float y)
{
    float z;
    z=x/y;
    return z;
}
