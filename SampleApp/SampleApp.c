#include <stdio.h>
int main()
{
    char str[100];
    double i;
    printf("enter a name and weight:\n");
    //char str[] = "Chris";
    scanf("%s %lf",str, &i);
    printf("Hi, my name is \n %s and I'm %lf \n", str, i);
    return 0;
}