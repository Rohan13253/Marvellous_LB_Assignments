#include<stdio.h>
 int OddFactorial(int iNo)
 {
    int iOdd = 0;
    int iEven = 0;
    int iCnt = 0;
    int iDiff = 0;
    iOdd = 1;
    iEven =1;

    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iOdd = iOdd * iCnt;
        }
        else if (iCnt % 2 == 0)
        {
            iEven = iEven * iCnt;
        }
    }
    iDiff = iEven - iOdd ;
    return iDiff;
 }
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number :");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);
    printf("Diffrence of Odd and Even factorial of %d is : %d",iValue,iRet);
    printf("\n");

    return 0;
}