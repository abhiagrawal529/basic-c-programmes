//to give all trigonometric ratio of inputed angle
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    float angle;
    printf("enter the angle in radians here :");
    scanf("%f",&angle);
    printf("sine of angle %f =%f\n",angle,sin(angle));
    printf("cos of angle %f =%f\n",angle,cos(angle));
    printf("tan of angle %f =%f\n",angle,tan(angle));
    getch();
    return 0;

} 