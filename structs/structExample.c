#include <string.h>
int main()
{
    struct date 
    {
        int day;
        int month;
        int year;
    };
    struct date today;
    /* alternative
struct date 
    {
        int day;
        int month;
        int year;
    } today;
    */
    today.day=5;
    today.month=2;
    today.year=2020;
    struct date tomorrow = {2,6,2020};
    struct date birthday = {2,10};
    struct date valentines = {.month = 2, .day = 14};
    struct date yesterday;
    yesterday = (struct date) {2,5,2020};//compound literals
    struct date myDates[5] = { {1,1,2000}, {9, 12, 1986}, {9, 19, 1980} };
    struct date myOtherDates[5] = { 1,1,2000, 9, 12, 1986, 9, 19, 1980 };

    struct month 
    {
        int days;
        char name[3];
    };
    struct date2 
    {
        int day;
        struct month mon;
        int year;
    } anotherday;
    anotherday.mon.days= 31;
    strncpy(anotherday.mon.name,"Jan",3);
    struct month Feb = {28, {'F','E','B'}};
    struct date *pdate;
    pdate = &today;
    (*pdate).day=6;
    pdate->month=2;
    return 0;
}