/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : FhtoCs
// Description      : Accepts temperature in Fahrenheit and converts it into Celsius
// Input            : float
// Output           : double
// Author           : Abhishek Rameshwar Khose
// Date             : 16/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

double FhtoCs(float fTemp)
{
    double dCelsius = 0.0;

    dCelsius = ((double)fTemp - 32.0) * (5.0 / 9.0);

    return dCelsius;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : ");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in celsius is %lf\n", dRet);

    return 0;
}