/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : CheckNumber
// Description      : Accepts number and checks whether it is positive, negative or zero
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 28/10/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckNumber(int iValue)
{
    if(iValue > 0)
    {
        printf("Positive Number\n");
    }
    else if(iValue < 0)
    {
        printf("Negative Number\n");
    }
    else
    {
        printf("Zero\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number : ");
    scanf("%d",&iValue);

    CheckNumber(iValue);

    return EXIT_SUCCESS;
}
