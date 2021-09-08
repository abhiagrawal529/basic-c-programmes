#include<stdio.h>
#include<conio.h>
int main()
{
    printf("*****BE CSE 2 SEMESTER*****\n");
    char input;
 printf("Enter the name of subject:\nFor FCP:F\nFor BEE:B\nFor Physics:P\n==>");
 scanf("%c",&input);
 if(input == 'F')
 {
     printf("FCP is taught by : mrs. kavita mam\n");
 }
 else if(input == 'B')
 {
     printf("BEE is taught by :mr. pn shukla sir\n");
 }
 else if(input == 'P')
 {
     printf("Physics is taught by:mr. pks sir\n");
 }
 printf("*****Thankyou*****\n");
 getch();
 return 0;
}