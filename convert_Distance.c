//convert km into meter,foot,cm & inches
#include<stdio.h>
int main()
{
float km,m,cm,foot,inc;
printf("enter distance in km :");
scanf("%f",&km);
m=km*1000;
cm=m*100;
foot=m*3.25;
inc=1.5*cm;
printf("%f km = %f m\n",km,m);
printf("%f km = %f cm\n",km,cm);
printf("%f km = %f foot\n",km,foot);
printf("%f km = %f inch\n",km,inc);
return 0;

}