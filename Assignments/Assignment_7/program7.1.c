/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : Pattern
// Description      : Accepts number from user and prints that number of $ * on screen
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 10/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$ * ");
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}
