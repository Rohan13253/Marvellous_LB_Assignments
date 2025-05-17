#include <stdio.h>

void Display(int iNo)
{
    int iCnt =0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
        

    for(int iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*");
    }

    for(int iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("#");
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number: ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
