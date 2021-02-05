#include <stdio.h>
int main (void)
{
    int arraySum (int array[], const int n);
    int arrayPSum (int *ptr, const int n);
    int values[10] = {3, 7, -9, 3, 6, -1, 7, 9, 1, -5};
    printf("The array sum is %i\n", arraySum(values, 10));
    printf("The pointer sum is %i\n", arrayPSum(values, 10));
    return 0;
}
int arraySum (int array[], const int n)
{
    int sum = 0, *ptr;
    int *const arrayEnd = array +n;
    for (ptr = array; ptr<arrayEnd; ptr++)
        sum +=*ptr;
    return sum;
}
int arrayPSum (int *ptr, const int n)
{
    int sum = 0/*, *ptr */;
    int *const arrayEnd = /*array*/ ptr +n;
    for (/*ptr = array*/; ptr<arrayEnd; ptr++)
        sum +=*ptr;
    return sum;
}


void copyString (char to[], char from [])
{
    int i;
    for (i = 0; from[i]!='\0'; ++i)
    {
        to[i]=from[i];
    }
    to[i] ='\0';
}
void optimizedCopyString(char *to, char *from)
{
    while(*from) // the null character is equal to the value 0, so it will break
        *to++=*from++;
    *to='\0';
}