#include<stdio.h>
struct student
{
    int id;
    char name[50];
    char add[50];
    int age;
};
void main()
{
    struct student s1[3];
    int i;

   printf("Enter the details of the student ");
   for (int i = 0; i < 3; i++)
   {
   printf("\n1) Enter the student id of %d student ",i+1);
   scanf("%d",&s1[i].id);
   printf("\n 2) Enter the name of the %d student ",i+1);
   scanf("%s",&s1[i].name);
    printf("\n 3) Enter the adress of %d student ",i+1);
    scanf("%s",&s1[i].add);
    printf("\n 4) Enter the age of %d student ",i+1);
        scanf("%d",&s1[i].age);
   }
        
    printf("The entered student information is ");
      for (int i = 0; i < 3; i++)
       {
        printf("\n\n                                      r 1) The student id of student %d is %d ",i+1,s1[i].id);
         printf("\n 2) The name of %d student  is %s ",i+1,s1[i].name);
          printf("\n 3) The address of %d student is %s ",i+1,s1[i].add);
           printf("\n 4) The age of %d student is %d ",i+1,s1[i].age);
           printf("\n________________________________________");
       }

   }   

