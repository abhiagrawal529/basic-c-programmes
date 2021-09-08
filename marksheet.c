//to make a marksheet showing marks in 5 different subjects inputed by user and show wheter student is pass odr fail
#include<stdio.h>
#include<conio.h>
int main()
{
    float sub01,sub02,sub03,sub04,sub05,tm,perc;
    printf("enter marks obtained in subject 01 out of 100:");
    scanf("%f",&sub01);
    printf("enter marks obtained in subject 02 out of 100:");
    scanf("%f",&sub02);
    printf("enter marks obtained in subject 03 out of 100:");
    scanf("%f",&sub03);
    printf("enter marks obtained in subject 04 out of 100:");
    scanf("%f",&sub04);
    printf("enter marks obtained in subject 05 out of 100:");
    scanf("%f",&sub05);
    tm=sub01+sub02+sub03+sub04+sub05;
    perc=tm/5;
    printf("total marks obtained in all subject = %f\n",tm);
    if(sub01<33||sub02<33||sub03<33||sub04<33||sub05<33)
    printf("sorry! not qualified  best luck next time\n\a");
    else{printf("CONGRATUALION'S YOU HAVE QUALIFEID WITH %f percentage IN EXAM. \n\a",perc);}
    getch();
    return 0;

    
}