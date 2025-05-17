#include<stdio.h>

int DollerToINR(int iNo)
{
    if(iNo < 0 )
    {
        iNo = - iNo;
    }
    int iInr = 0;
    iInr = iNo * 70;
    return iInr;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Amount :");
    scanf("%d",&iValue);

    iRet = DollerToINR(iValue);

    printf("Amount in INR is : %d",iRet);
    printf("\n");


    return 0;
}