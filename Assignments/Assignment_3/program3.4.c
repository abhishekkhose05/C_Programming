/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : DisplayConvert
// Description      : Accepts character and converts its case
// Input            : char 
// Output           : void 
// Author           : Abhishek Rameshwar Khose
// Date             : 25/10/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
    {
        printf("%c", cValue - 32);
    }
    else if((cValue >= 'A') && (cValue <='Z'))
    {
        printf("%c", cValue + 32);
    }
}
int main()
{
    char cValue = '\0';

    printf("Enter character\n");

    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}
