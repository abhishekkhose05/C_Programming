/////////////////////////////////////////////////////////////////////////////////
//
// Function Name    : RectArea
// Description      : Accepts width and height of reactangle and calculates its area
// Input            : float, float
// Output           : double
// Author           : Abhishek Rameshwar Khose
// Date             : 16/11/2026
//
/////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>

double RactArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    if(fWidth < 0.0f)
    {
        fWidth = -fWidth;
    }
    if(fHeight < 0.0f)
    {
        fHeight = -fHeight;
    }

    dArea = (double)fWidth * fHeight;

    return dArea;
}
int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width : ");
    scanf("%f", &fValue1);

    printf("Enter height : ");
    scanf("%f", &fValue2);

    dRet = RactArea(fValue1, fValue2);

    printf("Area of reatangle is %f\n", dRet);

    return 0;
}