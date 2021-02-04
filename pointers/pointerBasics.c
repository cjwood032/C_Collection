#include <stdio.h>
#include <stddef.h>

int main()
{
    int num;
    int *pnum=NULL;
    num = 35;
    pnum=&num;
    printf("num's value is %d\n", num);
    printf("num's address is %p\n", &num);
    printf("pnum's value is %p\n", pnum);
    printf("pnum's address is %p\n", &pnum);
    printf("pnum's value points to %d\n", *pnum);

}