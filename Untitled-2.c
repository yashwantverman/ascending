#include <stdio.h>
#include<math.h>
int main()
{
     float x1,x2,y1,y2;
     float x,y,D,z,p,a,r;
    printf("enter the value of x1:");
    scanf("%f",&x1);
    printf("enter the value of  x2: ");
    scanf("%f",&x2);
    printf("enter the value of  y1: ");
    scanf("%f",&y1);
    printf("enter the value of y2: ");
    scanf("%f",&y2);
    x=(x2-x1)*(x2-x1);
    y=(y2-y1)*(y2-y1);
    D=x+y;
    z=sqrt(D);
    r=z/2.0;
    a =3.14*r*r;
    p=2*3.14*r;
    printf(" area: %f\nperimeter:%f",a,p);
    return 0;
}