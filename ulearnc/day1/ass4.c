#include <stdio.h>
void integer_to_binary(int n) {
    if (n > 1)
        integer_to_binary(n / 2);
    printf("%d", n % 2);
}
void fractional_to_binary(float frac, int num_bits) {
    printf(".");
    for (int i = 0; i < num_bits; i++) {
        frac *= 2;
        int bit = (int)frac;
        printf("%d", bit);
        frac -= bit;
    }
}
int main() {
    float decimal_number;
    scanf("%f",&decimal_number);
    int integer_part = (int)decimal_number;
    float fractional_part = decimal_number - integer_part;
    printf("Decimal number: %f\n", decimal_number);
    printf("Binary representation: ");
    integer_to_binary(integer_part);
    fractional_to_binary(fractional_part, 16);
    printf("\n");
    return 0;
}
