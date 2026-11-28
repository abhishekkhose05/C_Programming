/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : CheckAdmission
// Description      : Accepts marks and age and checks eligibility for admission
// Input            : float, int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 30/10/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckAdmission(float fMarks, int iAge)
{
    if((fMarks < 0.0f) || (fMarks > 100) || (iAge < 0))
    {
        printf("Invalid Input\n");
    }
    else if((fMarks >= 60.0f) && (iAge >=17))
    {
        printf("Eligible for Adimission\n");
    }
    else
    {
        printf("Not eligible\n");
    }
}

int main()
{
    float fMarks = 0.0f;
    int iAge = 0;

    printf("Enter marks and age : ");
    scanf("%f %d", &fMarks, &iAge);

    CheckAdmission(fMarks, iAge);

    return EXIT_SUCCESS;
}