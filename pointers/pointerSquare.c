#include <stdio.h>
void square(int *n);
int main()
{
    int f = 3;
    printf("initial value is %i\n",f);
    square(&f);
    printf("squared value is %i\n",f);
}
void square(int *n)
{
    *n=*n * *n;
}