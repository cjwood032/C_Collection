#include <stdio.h>
#include <string.h>
int main() {
    char str[]="123456789";
    char *point = NULL;
    char *st =NULL;
    printf("The length is: %d\n", (int)strlen(str));
    printf("The size of is: %d\n", (int)sizeof(str));
    point=strchr(str, '4');
    printf("%s is the pointer\n", point);
    st=strstr(str, "456");
    printf("%s is the pointer\n", st);
   return 0; 
}