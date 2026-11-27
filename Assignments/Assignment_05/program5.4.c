/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : CheckMultipleDivisibility
// Description      : Accepts number and checks divisibility by 3 and 5 
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 29/10/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckMultipleDivisibility(int iValue)
{
    if((iValue % 3 == 0) && (iValue % 5 == 0))
    {
        printf("Divisible by Both\n");
    }
    else if(iValue % 3 == 0) 
    {
        printf("Divisible by 3 Only\n");
    }
    else if(iValue % 5 == 0)
    {
        printf("Divisible by 5 Only\n");
    }
    else
    {
        printf("Not Divisible by Either\n");
    }
}

int main(void)
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    CheckMultipleDivisibility(iValue);

    return EXIT_SUCCESS;
}