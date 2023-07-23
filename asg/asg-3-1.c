#include<stdio.h>
void main()
{
    char name[30];
    char dob[20];
    char mob[30];
    printf("Enter the name ");
    scanf("%s",&name);
    printf("\nEnter the date of birth in dd/mm/yyyy format ");
    scanf("%s",&dob);
    printf("\nEnter the mobile number ");
    scanf("%s",&mob);

    printf("\nThe name,date of birth and mobile number of the person is %s, %s, %s",name,dob,mob);
}