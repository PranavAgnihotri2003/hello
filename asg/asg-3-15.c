#include<stdio.h>
#include<math.h>
void main()
{
    float x1,x2,y1,y2,dist,dist1;
    printf("Enter two points x1 nad x2 ");
    scanf("%f %f",&x1,&x2);
    printf("Enter two points y1 and  y2 ");
    scanf("%f %f",&y1,&y2);
    dist=((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
   // dist1=pow(dist,1/2);
    printf("%.4f",sqrt(dist));
}