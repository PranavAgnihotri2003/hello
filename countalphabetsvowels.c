#include<stdio.h>
#include<string.h>
void main()
{
    char string[]="agnihotripranav879@gmail.com";
    int c=0,d=0,f=0,h=0;
   // printf("Enter a string ");
    //scanf("%s",&string);
    for(int i=0;i<=strlen(string);i++)
    {
         if (string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u'||string[i]=='A'||string[i]=='E'||string[i]=='I'||string[i]=='O'||string[i]=='U')
     {
        c++;
     }
     else if(string[i]=='1'||string[i]=='2'||string[i]=='3'||string[i]=='4'||string[i]=='5'||string[i]=='6'||string[i]=='7'||string[i]=='8'||string[i]=='9'||string[i]=='0')
     {
        d++;
     }
     else if(string[i]=='@'||string[i]=='!'||string[i]=='$'||string[i]=='%'||string[i]=='^'||string[i]=='&'||string[i]=='*')
     {
        f++;
     }
     else
     {
        h++;
     }
     
    }
     printf("The number of vowels in the string are %d ",c);
     printf("\nThe number of digits in the string is %d ",d);
     printf("\nThe number of special characters in string are %d ",f);
     printf("\nNumber of consonants is %d ",h);
     

}
