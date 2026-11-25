/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : Display
// Description      : Accepts number from user and prints that many * on screen
// Input            : int
// Output           : None (void)
// Author           : Abhishek Rameshwar Khose
// Date             : 19/10/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo)
{
    while( iNo > 0)
    {
        printf(" * ");
        iNo--;
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