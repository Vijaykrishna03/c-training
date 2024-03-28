#include <stdio.h>
void square(int *num) {
    *num =(*num) * (*num);
}
int main() {
   int x = 5;
   square(&x);
   printf("squared value is %d",x);
   return 0;
}