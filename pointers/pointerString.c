#include <stdio.h>

int main()
{
    int strlength(const char *str);
    int stringLength(const char *str);
    printf("%s string length is: %i\n","fish",strlength("fish"));
    printf("%s string length is: %i\n","tacocat",strlength("tacocat"));
    printf("%s string length is: %i\n","fish",stringLength("fish"));
    printf("%s string length is: %i\n","tacocat",stringLength("tacocat"));
    return 0;
}

int strlength(const char *str)
{
    int count = 0;
    while(*str)
    {   str++;
        count++;
    }
    return count;
}
//instructor solution example

int stringLength(const char *string)
{
    const char *lastAddress = string;
    while (*lastAddress)
    {
        ++lastAddress;
    }
    return lastAddress-string;
}