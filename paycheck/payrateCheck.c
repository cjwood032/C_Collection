#include <stdio.h>
#include <stdlib.h>
#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTIME 40
/*enter number of hours 
$12/hr pay, time and a half OT
tax rate 15% for first $300, 20% next $150, 25% for remaining pay.
*/
int main()
{
    int hours=0;
    double pay=0;
    double grosspay=0;
    double taxes=0;
    printf("enter the number of hours worked:\n");
    scanf("%d", &hours);
    if (hours>40)
    {
        grosspay = 1.5*PAYRATE*(hours-OVERTIME)+PAYRATE*OVERTIME;
    }
    else
    {
        grosspay=PAYRATE*hours;
    }
    if(grosspay<=300)
    {
        taxes = grosspay*TAXRATE_300;
    }
    else if (grosspay<=450&&pay>300)
    {//275 is the 300-15%
        taxes = 300*TAXRATE_300 + (grosspay-300)* TAXRATE_150;
    }
    else
    {//395 is 300-15% + 150-20%
        taxes = 300*TAXRATE_300 + 150* TAXRATE_150+(grosspay-450)*TAXRATE_REST;
    }
    pay=grosspay-taxes;
    printf("You made $%.2f\nAnd paid $%.2f in taxes\nresulting in $%.2f net pay\n",grosspay, taxes, pay);
    return 0;
}