/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : KMtoMeter
// Description      : Accepts distance in kilometer and converts it into meter
// Input            : int
// Output           : int
// Author           : Abhishek Rameshwar Khose
// Date             : 16/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int KMtoMeter(int iNo)
{
    int iMeter = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iMeter = iNo * 1000;

    return iMeter;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : ");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in meter is %d\n", iRet);

    return 0;
}