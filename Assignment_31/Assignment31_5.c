#include<stdio.h>


typedef unsigned int UNIT;


UNIT ChkBit(UNIT iNo)
{
    int iCnt = 0;
    UNIT iMask = 0x00000010;
    UNIT Result = 0;

    
    Result = iNo | iMask;
    

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