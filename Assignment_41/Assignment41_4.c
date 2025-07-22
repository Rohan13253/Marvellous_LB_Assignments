#include<stdio.h>

void Display(int i)
{
    static char ch = 'A';
    if( i > 0)
    {
        printf("%c",ch);
        i--; 
        ch++;
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