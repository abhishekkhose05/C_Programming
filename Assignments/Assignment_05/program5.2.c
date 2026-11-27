/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : CheckLeapYear
// Description      : Accepts year and checks whether it is leap year or not
// Input            : int
// Output           : void 
// Author           : Abhishek Rameshwar Khose
// Date             : 29/10/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if(iYear <= 0)
    {
        printf("Invalid Year\n");
        return;
    }   
    
    if((iYear % 400 == 0) || ((iYear % 4 == 0) && (iYear % 100 !=0)))
    {
        printf("%d -> Leap Year\n", iYear);
    }
    else
    {
        printf("%d -> Not a Leap Year\n", iYear);
    }
}
int main()
{
    int iYear = 0;

    printf("Enter Year : ");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}