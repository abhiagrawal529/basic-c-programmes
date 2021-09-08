#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n=0,totsum=0;
    printf("enter the no upto which you want to sum of :");
    scanf("%d",&i);
    for(n;n<=i;n++)
    {
      totsum+=n; 
    }
    printf("sum of no upto %d = %d \n",i,totsum);
    getch();
    return 0;
    
}