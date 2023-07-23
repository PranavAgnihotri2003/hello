#include<stdio.h>
void vowel()
{
    int d;
    printf("Enter a character ");
    scanf("%c",&d);
    if(d=='a'||d=='e'||d=='i'||d=='o'||d=='u'||d=='A'||d=='O'||d=='U'||d=='E'||d=='I')
    {
        printf("It is a vowel ");
    }
    else
    {
        printf("It is not a vowel ");
    }
}