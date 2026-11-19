/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : Display
// Description      : Accepts number and displays pattern of * and #
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 15/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("* ");
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("# ");
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
