#include <stdio.h>
#include <string.h>
char *reverse(char string[]);
int main()
{
    char str[] = "Palindromeswillnotwork";
    reverse(str);
    char str2[] = "tacocat";
    reverse(str2);
    return 0;
}

char *reverse(char string[])
{
    int len = strlen(string) - 1;
    char reversed[len];
    for (int i = 0; i <= len; i++)
    {
        reversed[i] = string[len - i];
    }
    printf("%s\nreversed is\n%s\n", string, reversed);
    return string;
}
void bubbleSort()
{
    int n;
    char temp[25];
    char strings[25][50];
    printf("number of strings:\n");
    scanf("%d", &n);
    printf("enter the strings");
    for (int i = 0; i <= n; i++)
    {
        scanf("%s", strings[i]);
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=n-i;j++)
        {
            if(strcmp(strings[j], strings[j+1])>0)
            {
                strncpy(temp,strings[j], sizeof(temp)-1);
                strncpy(strings[j],strings[j+1], sizeof(temp)-1);
                strncpy(strings[j+1],temp, sizeof(temp)-1);
            }
        }
    }
}