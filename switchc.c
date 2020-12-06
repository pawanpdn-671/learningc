#include<stdio.h>
int main()
{
    int math,eng,phy,chem,cs,total;
    float per;
    char grade;
    printf("Enter the Mathematics Marks : ");
    scanf("%d",&math);
    printf("Enter the English Mark : ");
    scanf("%d",&eng);
    printf("Enter the Physics Mark : ");
    scanf("%d",&phy);
    printf("Enter the Chemistry Mark : ");
    scanf("%d",&chem);
    printf("Enter the Computer Science Mark : ");
    scanf("%d",&cs);
    total=math+eng+phy+chem+cs;
    per=(total*100)/500;
    if(per>=81&&per<=100)
        grade='A';
    else if(per>=61&&per<=80)
        grade='B';
    else if(per>=33&&per<=60)
        grade='C';
    else
        grade='F';
    switch(grade)
    {
        case 'A': printf("\nYour Grade is %c",grade);
                          break;
        case 'B': printf("\nYour Grade is %c",grade);
                        break;
        case 'C': printf("Your Grade is %c",grade);
                         break;
        default: printf("\nYou Failed");
    }
    return 0;
}
