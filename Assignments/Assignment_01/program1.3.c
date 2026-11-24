///////////////////////////////////////////////////////////
//
// Function Name    : Display
// Description      : Displays 5 to 1 numbers on screen
// Input            : None (void)
// Output           : None (void)
// Author           : Abhishek Rameshwar Khose
// Date             : 18/10/2026
//
///////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0; 
    
    i = 5;
    while(i >= 1)
    {
        printf("%d",i);
        i--;
    }
}

int main()
{
    Display();
    
    return 0;
}