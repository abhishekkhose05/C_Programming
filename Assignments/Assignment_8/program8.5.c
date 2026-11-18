/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : TableRev
// Description      : Accepts number from user and displays its table in reverse order
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 15/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void TableRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 10; iCnt >= 1; iCnt--)
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

    TableRev(iValue);

    return 0;
}