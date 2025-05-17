#include<stdio.h>

int Factorial(int iNo)
{
    int iFact = 0;
    int iCnt = 0 ;
    iFact = 1;

    for(iCnt = 1 ; iCnt <= iNo;iCnt++)
    { 
        iFact = iFact * iCnt;
    }
    return iFact;
    
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is %d",iValue,iRet);

    return 0;
}