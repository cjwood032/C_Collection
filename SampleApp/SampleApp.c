#include <stdio.h>
int main()
{
    double w=20.25;
    double l=8.5;
    double p;
    double a;
    //printf("enter a length and width:\n");
    //scanf("%f %f",&w, &l);
    p=w*2+l*2;
    a = w*l;
    printf("A rectangle of width:%.2f and lenght:%.2f\nhas a perimeter of %.2f, and an area of %.2f",w,l,p,a);
    return 0;
}