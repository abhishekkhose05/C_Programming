//////////////////////////////////////////////////////////////////////////////
//
// Function Name    : Accept
// Description      : Accepts number and prints '*' that many time on screen
// Input            : int
// Output           : None (void)
// Author           : Abhishek Rameshwar Khose
// Date             : 18/10/2026
//
//////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue = 0;
    iValue =5;

    Accept(iValue);
    return 0;
}