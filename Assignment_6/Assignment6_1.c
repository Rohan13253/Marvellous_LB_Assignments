#include<stdio.h>

void  Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo >= 50) && (iNo < 100))
    {
        printf("Medium");
    }
    else if(iNo >= 100)
    {
        printf("Large");
    }
    printf("\n");
}


int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}