#include <stdio.h>

long int Power(int iNo1, int iNo2)
{
    long int iCnt = 0,iMult=1;
    
    if (iNo1 < 0)
    {
        iNo1 = -iNo1;
    }
    for (iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult=iMult*iNo1;
    }
    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2;
    long int iRet=0;

    printf("Enter Base\n");
    scanf("%d", &iValue1);

    printf("Enter Power\n");
    scanf("%d", &iValue2);

    iRet = Power(iValue1, iValue2);

    printf("%d", iRet);

    return 0;
}