/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : CheckVotingEligibility
// Description      : Accepts age and checks whether it is eligible for voting or not
// Input            : int
// Output           : void
// Author           : Abhishek Rameshwar Khose
// Date             : 28/10/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if (iAge >= 18)
    {
        printf("Eligible for Voting\n");
    }
    else
    {
        printf("Not Eligible for Voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age : ");
    scanf("%d", &iAge);

    CheckVotingElighiblity(iAge);

    return EXIT_SUCCESS;
}