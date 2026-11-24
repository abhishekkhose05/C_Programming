/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : Display
// Description      : Accepts number and prints Hello if less than 10 otherwise Demo
// Input            : int
// Output           : None (void)
// Author           : Abhishek Rameshwar Khose
// Date             : 19/10/2026
//
//////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}