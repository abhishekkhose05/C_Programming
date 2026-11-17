/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : OddDisplay
// Description      : Accepts N from user and prints all odd numbers up to N
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 10/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt =0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {
            printf("%d ", iCnt);
        }
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}