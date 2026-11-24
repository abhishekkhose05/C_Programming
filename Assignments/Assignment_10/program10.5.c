/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : SquareMeter
// Description      : Accepts area in square feet and converts it into square meter
// Input            : int
// Output           : double
// Author           : Abhishek Rameshwar Khose
// Date             : 16/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

double SquareMeter(int iValue)
{
    double dSqMeter = 0.0;

    if(iValue < 0)
    {
        iValue = -iValue;
    }
    
    dSqMeter = (double)iValue * 0.0929;

    return dSqMeter;
}
int main()
{
    int iNo = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : ");
    scanf("%d", &iNo);

    dRet = SquareMeter(iNo);

    printf("Area in square meter is %lf\n", dRet);

    return 0;
}