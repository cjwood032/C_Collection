#include <stdio.h>
/*
Challenge 1: write a function to count the number of characters in a string, without using the strlen function.
Challenge 2: write a function to concat two strings, without strcat.
Challenge 3: write a function that determines if two strings are equal, without strcmp.
*/

int countString(char str[])
{
    _Bool ended = 0;
    int counter = 0;
    while (ended!=1)
    {
        if (str[counter]=='\0')
        {
            ended = 1;
            break;
        }
        else
        {
            counter++;
        }
    }
    return counter;
}
void concatString(char str1[], char str2[])
{
    int str1len;
    int str2len;
    str1len = countString(str1);
    str2len = countString(str2);
    int str3len = str1len+str2len;
    char str3[str3len];
    for (int i = 0; i<= str1len; i++)
    {
            str3[i]=str1[i];
    }
    for (int i = 0; i<= str2len; i++)
    {
            str3[i+str1len]=str2[i];
    }
    printf("%s concatenated with %s\nproduced %s\n", str1, str2, str3);

}
_Bool compareString(char str1[], char str2[])
{
    _Bool bool = 1;
    int str1len;
    str1len = countString(str1);
    int str2len; 
    str2len= countString(str2);
    if (str1len=!str2len)
    {
        bool = 0;
    }
    if(bool==1)
    {
        for (int i = 0; i<=str1len; i++)
        {
            if(str1[i]!=str2[i])
            {
                bool=0;
                break;
            }
        }
    }
    if (bool==1)
    {
      printf("%s\t%s matched!\n", str1,str2);   
    }
    else 
    {
        printf("%s\t%s did not match!\n", str1,str2);   
    }
    return bool;
}
int main()
{
    char name[] ="Chris";
    char lastName[] = "Wood";
    char fullName[] = "Christopher";
    _Bool match;
    int i = countString(name);
    printf("%s : %d\n",name, i);
    i = countString(fullName);
    printf("%s : %d\n",fullName, i);
    concatString(name,lastName);
    match = compareString(name, lastName);
    match = compareString(name, name);
    
    return 0;
}