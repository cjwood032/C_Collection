#include <stdio.h>
#include <stdlib.h>
    struct item {
        char *itemName;
        int quantity;
        float price;
        float amount;
    };
void readItem(struct item *Item);
void writeItem(struct item *Item);

int main() 
{
    struct item it;
    struct item *pit;
    pit =&it;
    pit->itemName = (char *)malloc(30*sizeof(char));
    if(pit)
    {
        readItem(pit);
        writeItem(pit);
    }
    else{exit(-1);}
    
    free(pit->itemName);
    return 0;
}
void readItem(struct item *Item)
{
    printf("product name?\n");
    scanf("%s", Item->itemName);
    printf("product price?\n");
    scanf("%f", &Item -> price);
    printf("quantity?\n");
    scanf("%d", &Item->quantity);
    Item->amount = (float)Item -> price * Item ->quantity;
}
void writeItem(struct item *Item)
{
    printf("product name is\n");
    printf("%s\n", Item->itemName);
    printf("product price is\n");
    printf("%.2f\n", Item->price);
    printf("quantity is\n");
    printf("%d\n", Item->quantity);
    printf("product amount is\n");
    printf("%.2f\n", Item->amount);
}
