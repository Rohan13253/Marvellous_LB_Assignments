#include<stdio.h>


typedef unsigned int UNIT;


UNIT ChkBit(UNIT iNo)
{
    int iCnt = 0;
    UNIT iMask = 0x00000080;
    UNIT Result = 0;

    if(iNo & iMask)
    {
        Result = iNo ^ iMask;
    }
    else
    {
        printf("The Number has 7th bit OFF\n");
    }

   return Result;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    

    printf("Enter the Number:\n");
    scanf("%d",&iValue);

    iRet = ChkBit(iValue);

    printf("The chnaged Value is : %d\n",iRet );
    
}