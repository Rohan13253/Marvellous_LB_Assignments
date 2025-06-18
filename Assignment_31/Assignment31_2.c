#include<stdio.h>


typedef unsigned int UNIT;


UNIT ChkBit(UNIT iNo)
{
    int iCnt = 0;
    UNIT iMask = 0;
    UNIT iMask1 = 0x00000080;
    UNIT iMask2 = 0x00000400;
    UNIT Result = 0;

    iMask = iMask1 | iMask2;

    if(iNo & iMask)
    {
        Result = iNo ^ iMask;
    }
    else
    {
        printf("The Number has 7th and 10th bit OFF\n");
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