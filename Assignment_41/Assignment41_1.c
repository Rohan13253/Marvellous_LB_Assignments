#include<stdio.h>

void Display()
{
    static int i = 0;
    if( i < 5)
    {
        printf("*");
        i++;
        Display();
    }
}

int main()
{
    int iValue = 0;
    printf("Enter the Number:");
    scanf("%d",&iValue);
    Display();

    return 0;
}