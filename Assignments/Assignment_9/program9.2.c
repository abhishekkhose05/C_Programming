/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : DollarToINR
// Description      : Accepts amount in USD and returns its value in INR (1$ = 70 rupees)
// Input            : int
// Output           : int
// Author           : Abhishek Rameshwar Khose
// Date             : 15/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

int DollarToINR(int iNo)
{
    int iAns = 0;

    iAns = iNo * 70;

    return iAns;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD : ");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return 0;
}