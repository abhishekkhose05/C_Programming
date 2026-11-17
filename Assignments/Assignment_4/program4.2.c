/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : CheckEvenOdd
// Description      : Accepts number and checks whether it is even or odd
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 28/10/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckEvenOdd(int iValue)
{
    if((iValue %2) == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckEvenOdd(iValue);

    return EXIT_SUCCESS;
}