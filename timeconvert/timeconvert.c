#include <stdio.h>
int main()
{
    int min;
    double year;
    double day;
    double rent =52600;
    printf("input the number of minutes\n");
    scanf("%i", &min);
    day = (double)min/(60*24);
    year = min/rent;
    printf("%e days \n %g years", day, year);
    return 0;
}