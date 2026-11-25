/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : DisplayFactor
// Description      : Accepts number and displays its even factors 
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 25/10/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for (i = 1; i<=iNo / 2; i++)
    {
        if((iNo % i == 0) && (i % 2 == 0))
        {
            printf("%d ", i);
        }
    }
}
 
int main()
{
    int iValue = 0;
     
    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;

}