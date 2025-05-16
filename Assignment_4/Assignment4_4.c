#include<stdio.h>

int SumNonFactor(int iNo)
{
    int iCnt = 0;
    int iSum= 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            iSum = iSum + iCnt;
            
        }
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = SumNonFactor(iValue);
    
    printf("Sum of Nonfactors of %d is %d",iValue,iRet);
    printf("\n");

    return 0;
}