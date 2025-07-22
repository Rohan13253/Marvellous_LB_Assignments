#include<stdio.h>

void Display(int i)
{
    
    if( i > 0)
    {
        printf("%d",i);
        i--;
        Display(i);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Number:");
    scanf("%d",&iValue);
    Display(iValue);

    return 0;
}