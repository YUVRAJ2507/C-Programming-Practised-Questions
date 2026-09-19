#include <stdio.h>

    struct CartItem{
        int price;
        int quantity;
    };

    float Calculatetotal(struct CartItem item){
        return item.price * item.quantity;
    }

    int main(){
        struct CartItem item1;
        int x;
        int y;
       printf("Enter the Price of item: ");
       scanf("%d", &x);

    printf("Enter the Quantity of item: ");
    scanf("%d", &y);

    item1.price = x;
    item1.quantity = y;

    float total = Calculatetotal(item1);

    printf("Total = %.2f\n", total);
    }



