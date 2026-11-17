/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : Display
// Description      : Accepts number from user and prints numbers till that number
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 10/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo =-iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}