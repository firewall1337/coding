#include <stdio.h>
#include <math.h>

float getDiameter(float radius);
float getCircumference(float radius);
float getArea(float radius);


int main() 
{
    float radius, dia, circ, area;
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    
    dia  = getDiameter(radius);       
    circ = getCircumference(radius); 
    area = getArea(radius);           
    
    printf("Diameter of the circle = %.2f units\n", dia);
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f sq. units", area);
    
    return 0;
}


float getDiameter(float radius) 
{
    return (2 * radius);
}

float getCircumference(float radius) 
{
    return (2 * M_PI * radius); // M_PI = PI = 3.14 ... 
}

float getArea(float radius)
{
    return (M_PI * radius * radius); // M_PI = PI = 3.14 ...
}