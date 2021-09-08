#include<stdio.h>
#include<conio.h>
int main()
{
    
    char ss;
    int n,x;
    printf("enter:\n\n B = BUREGER\n P = PIZZA\n I = ICECREAM \n ");
    scanf("%c",&ss);
    printf("how many %c you want to order: %d \n",ss,n);
    switch(ss)
    {
case'B':
scanf("%d",&n);
x = n*200;
printf("Burger = Rs %d \n",x);
case'P':
scanf("%d",&n);
x = n*300;
printf("Pizza = Rs %d \n",x);
case'I':
scanf("%d",&n);
x = n*100;
printf("Icecream = Rs %d \n",x);
    }
    getch();
    return 0;
}

