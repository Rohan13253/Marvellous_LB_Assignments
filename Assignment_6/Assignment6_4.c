#include<stdio.h>

void DisplayTable(int iNo)
{
    int iMulti = 0;
    int iCnt = 0 ;
    iMulti = 1;

    for(iCnt = 1 ; iCnt <= 10;iCnt++)
    { 
        iMulti = iNo * iCnt;
        printf("%d ",iMulti);
    }
    
    
}


int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number :\n");
    scanf("%d",&iValue);

    DisplayTable(iValue);

    return 0;
}