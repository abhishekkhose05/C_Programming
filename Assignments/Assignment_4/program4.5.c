/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : CheckDivisibility
// Description      : Accepts number and checks whether it is divisible by 5 or not 
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 28/10/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckDivisibility(int iValue)
{
    if((iValue % 5) == 0)
    {
        printf("Divisible by 5\n");
    }
    else
    {
        printf("Not Divisible by 5\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d", &iValue);

    CheckDivisibility(iValue);

    return EXIT_SUCCESS;
}