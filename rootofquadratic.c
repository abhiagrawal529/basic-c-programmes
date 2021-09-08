//roots of quadratic equations
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
 float a,b,c,d,r1,r2;
 printf("enter value's\na:coefficient of x^2\nb:coefficent of x\nc:constant value\n");
 scanf("%f%f%f",&a,&b,&c);
 d = (b*b)- (4*a*c);
 if(d<0)
 {
     printf("roots are imaginary\n");
 }
 else if(d == 0)
 {
     printf("roots are real and equal\n");
 }
 else
 {
     printf("roots are real and unequal\n");
 }
 r1 = (-b + sqrt(d))/2*a;
 r2 = (-b - sqrt(d))/2*a;
 printf("roots of equations are:\nr1:%f\nr2:%f\n",r1,r2);
 getch();
 return 0;





}