
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
    return 0;
}