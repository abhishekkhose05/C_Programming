/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : Table
// Description      : Accepts number from user and displays its table
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 15/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
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

    Table(iValue);

    return 0;
}