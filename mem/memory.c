#include <stdlib.h>
#include <stdio.h>

int main()
{
    char *pstring=NULL;
    int i;
    printf("input a string length:\n");
    scanf("%i", &i);
    pstring = (char *)malloc(i*sizeof(char));
    if (pstring !=NULL)
    {
        printf("input a string:\n");
        scanf("%s", pstring);
    }
    printf("text is %s\n", pstring);
    free(pstring);
    return 0;
}