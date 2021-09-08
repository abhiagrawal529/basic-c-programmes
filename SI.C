#include<stdio.h>
#include<conio.h>
int main()
{
float p,r,t,si;
clrscr();
printf("enter principal amount\n");
scanf("%f",&p);
printf("enter rate of interset\n");
scanf("%f",&r);
printf("enter time in yeras\n");
scanf("%f",&t);
si = (p*r*t)/100;
printf("simple intersest = %f\n",si);
getch();
return 0;
}