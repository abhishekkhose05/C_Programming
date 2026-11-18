/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : Number
// Description      : Accepts number from user and checks range (Small/Medium/Large)
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 15/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if((iNo > 50) && (iNo < 100))
    {
        printf("Medium");
    }
    else if(iNo > 100)
    {
        printf("Large");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;
}
