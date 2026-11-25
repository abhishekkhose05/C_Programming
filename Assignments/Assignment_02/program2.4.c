/////////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : Display
// Description      : Accepts two numbers and display first number in that frequency
// Input            : int,int
// Output           : None (void)
// Author           : Abhishek Rameshwar Khose
// Date             : 19/10/2026
//
/////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Display(int iNo, int iFrequency)
{
    int iCnt = 0;

    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;   
    }

    for(iCnt = 1; iCnt <= iFrequency; iCnt++)
    {
        printf("%d\t", iNo);
    }
    printf("\n");
}
int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d", &iValue); 

    printf("Enter frequency : ");
    scanf("%d", &iCount);

    Display(iValue, iCount);

    return 0;
}