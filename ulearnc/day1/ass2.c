#include <stdio.h>
#define TAX_RATE 0.13
#define NUM_ITEMS 3
int main() {
    float item_prices[NUM_ITEMS];
    int item_quantities[NUM_ITEMS];
    float subtotal = 0.0;
    float total = 0.0;
    printf("Enter the prices and quantities of %d items:\n", NUM_ITEMS);
    for (int i = 0; i < NUM_ITEMS; i++) {
        printf("Item %d price: ", i + 1);
        scanf("%f", &item_prices[i]);
        printf("Item %d quantity: ", i + 1);
        scanf("%d", &item_quantities[i]);
        subtotal += item_prices[i] * item_quantities[i];
    }
    total = subtotal * (1 + TAX_RATE);
    printf("\nSubtotal: $%.2lf\n", subtotal);
    printf("Tax (13%%): $%.2lf\n", subtotal * TAX_RATE);
    printf("Total: $%.2lf\n", total);
    return 0;
}
