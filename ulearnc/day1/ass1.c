#include <stdio.h>
float fahrenheit_to_celsius(float fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}
float celsius_to_fahrenheit(float celsius) {
    return (celsius * 9/5) + 32;
}
int main() {
    float fahrenheit_temp;
    scanf("%f",&fahrenheit_temp);
    float celsius_temp = fahrenheit_to_celsius(fahrenheit_temp);
    printf("%.2f°F is equivalent to %.2f°C\n", fahrenheit_temp, celsius_temp);
    scanf("%f",&celsius_temp);
    fahrenheit_temp = celsius_to_fahrenheit(celsius_temp);
    printf("%.2f°C is equivalent to %.2f°F\n", celsius_temp, fahrenheit_temp);
    return 0;
}
