#include<stdio.h>
void main()
{
    int hr,id;
    float sal,sal1;
    printf("Enter the id ");
    scanf("%d",&id);
    printf("Enter the total amount of hours worked in the month ");
    scanf("%d",&hr);
    printf("Enter the hourly salary ");
    scanf(" %2f",&sal );
    sal1=sal*hr;
    printf("The id is %d ",id);
    printf("\nEnter the total amount of hours worked in the month are %d ",hr);
    printf("\nThe monthly salry is %2f",sal1);

}