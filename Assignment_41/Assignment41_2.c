#include<stdio.h>

void Display(int iCnt)
{
    static int i = 0;
    if(i <= iCnt)
    {
        printf("%d",i);
        i++; 
        Display(iCnt);
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