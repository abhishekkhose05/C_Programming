/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : CircleArea
// Description      : Accepts radius of circle and calculates its area (PI = 3.14)
// Input            : float
// Output           : double
// Author           : Abhishek Rameshwar Khose
// Date             : 16/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

double CircleArea(float fRadius)
{
    float fPI = 3.14f;
    double dArea = 0.0;

    if(fRadius < 0.0f)
    {
        fRadius = -fRadius;
    }

    dArea = fPI * fRadius * fRadius;

    return dArea;
}
int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : ");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf\n", dRet);

    return 0;
}
