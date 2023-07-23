#include<stdio.h>
void main()
{
    int temp=0;
    char string[]={'X','M','L'};
    string[2]=temp;
    string[2]=string[0];
    string[0]=temp;
    printf("%s",string);


}