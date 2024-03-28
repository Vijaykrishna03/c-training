#include<stdio.h>
int main()
{   int integer;
    char character;
    float floating_no;
    double vardouble;
    printf("size of integer is %ld\nsize of char is %ld\n",sizeof(integer),sizeof(character));
    printf("size of float is %ld\nsize of double is %ld\n",sizeof(floating_no),sizeof(vardouble));
    return 0;
}