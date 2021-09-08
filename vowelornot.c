#include<stdio.h>
#include<conio.h>
int main()
{
    char alpha;
    printf("enter any alphabet here:");
    scanf("%c",&alpha);
    if(alpha == 'a')
    printf("%c is a vowel\n",alpha);
    else if(alpha == 'e')
    printf("%c is a vowel\n",alpha);
    else if(alpha == 'i')
    printf("%c is a vowel\n",alpha);
    else if(alpha == 'o')
    printf("%c is a vowel\n",alpha);
    else if(alpha == 'u')
    printf("%c is a vowel\n",alpha);
    else{printf("%c is a consonant\n",alpha);}
    getch();
    return 0;
    
    

}