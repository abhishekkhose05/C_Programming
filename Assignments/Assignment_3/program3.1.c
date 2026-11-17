/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : PrintEven
// Description      : Accepts number and prints its first N even numbers
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 25/10/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    int iCnt = 0;

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("%d ", iCnt * 2);
    }
}

int main()
{
    int iValue = 0;
    printf("Enter number\n");
    scanf("%d",&iValue);

    PrintEven(iValue);

    return 0;
}
