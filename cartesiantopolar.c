//to convert given cartesian coordinates into polar coordinates
#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float x,y,r,phi;
    printf("enter the cartesian coordinates here first x and then y:");
    scanf("%f%f",&x,&y);
    r = sqrt(x*x + y*y);
    phi = atan(y/x);
    printf("polar coordinate :\nr=>%f\nphi=>%f",r,phi);


    getch();
    return 0;


}