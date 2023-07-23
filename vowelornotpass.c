
#include<stdio.h>
int vowel(char y)
{
    
   
   
    if(y=='a'||y=='e'||y=='i'||y=='o'||y=='u'||y=='A'||y=='O'||y=='U'||y=='E'||y=='I')
    {
       return 1;
    }
    else
    {
        return 0;
    }
}
void main()
{

char x;
printf("Enter a character ");
scanf("%d",&x);
int z=vowel(x);
if (z==1)
{
   printf("It is not a vowel");
}
else
{
   printf("is a vowel");
}



}