#include<stdio.h>
#include<conio.h>
int main()
{
    int n,i=1;
    printf("enter the no :");
    scanf("%d",&n);
    for(i;i<=10;i++)
    {
        printf("%d X %d = %d \n",n,i,n*i);
    }
    getch();
    return 0;
}