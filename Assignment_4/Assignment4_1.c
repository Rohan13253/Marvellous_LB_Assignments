#include<stdio.h>

int MultiFactor(int iNo)
{
    int iCnt = 0;
    int iMulti = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        iMulti = 1;
        if((iNo % iCnt) == 0)
        {
            iMulti = iMulti * iCnt;
            
        }
    }
    return iMulti;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    iRet = MultiFactor(iValue);
    

    printf("%d\n",iRet);
    printf("Multiplication of factors of %d is %d",iValue,iRet);
    printf("\n");

    return 0;
}