#include<stdio.h>
 int OddFactorial(int iNo)
 {
    int iOddFact = 0;
    int iCnt = 0;
    iOddFact = 1;

    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return iOddFact;
 }
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Multiplication of Odd factorial of %d is : %d",iValue,iRet);
    printf("\n");

    return 0;
}