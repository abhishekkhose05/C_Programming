/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : RangeDisplay
// Description      : Accepts range from user and displays all numbers in between
// Input            : int, int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 16/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid range\n");
        return;
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d ", iCnt);
    }
    printf("\n");
}   
int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter starting point");
    scanf("%d",&iValue1);

    printf("Enter ending point");
    scanf("%d",&iValue2);

    RangeDisplay(iValue1, iValue2);

    return 0;
}
