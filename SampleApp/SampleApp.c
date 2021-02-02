#include <stdio.h>
int main()
{
    char str[100];
    int i;
    printf("enter a name and age:\n");
    //char str[] = "Chris";
    scanf("%s %d",str, &i);
    printf("Hi, my name is \n %s and I'm %d years old\n", str, i);
    return 0;
}