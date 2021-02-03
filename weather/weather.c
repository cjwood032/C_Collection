#include <stdio.h>
int main()
{
    // get yearly rainfall
    // get monthly average
    // get yearly average
    float monthly[12]={0,0,0,0,0,0,0,0,0,0,0,0};
    float record[5][12]={
        {20,60,80,30,20,10,05,10,30,10,20,10},
        {8,100,10,20,30,20,9,20,30,10,2,10},
        {20,50,60,30,50,20,30,15,0,0,0,0},
        {10,50,10,90,70,50,10,20,0,0,0,0},
        {30,50,80,100,80,90,30,15,0,0,0,0}
    };
    float total =0;
    for (int i =0; i<5; i++)
    {
        float average=0;
        for (int j=0; j<12; j++)
        {
            average += record[i][j];
            monthly[j]+= record[i][j];
        }
        total+=average;
        printf("yearly average was %.2f\n", average/12);
    }
    for (int i =0; i<12; i++)
    {
        printf("monthly average for month %d was %.2f\n",i, monthly[i]/12);
    }
    printf("the total rainfall was %.2f, with an average of %.2f across all years\n", total, total/5);
    return 0;
}