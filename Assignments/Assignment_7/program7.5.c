/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : Display
// Description      : Accepts number from user and prints its number line from -iNo to iNo
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 10/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d ", iNo * iCnt);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    MultipleDisplay(iValue);

    return 0;
}