#include<stdio.h>
 int EvenFactorial(int iNo)
 {
    int iEvenFact = 0;
    int iCnt = 0;
    iEvenFact = 1;

    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
    }
    return iEvenFact;
 }
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = EvenFactorial(iValue);
    printf("Multiplication of even factorial of %d is : %d",iValue,iRet);
    printf("\n");

    return 0;
}