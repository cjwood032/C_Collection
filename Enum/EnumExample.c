#include <stdio.h>
int main()
{
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT};
    enum Company Xerox = XEROX;
    enum Company Google = GOOGLE;
    enum Company Ebay = EBAY;
    printf("%d\n",Xerox);
    printf("%d\n",Google);
    printf("%d\n",Ebay);
    return 0;
}