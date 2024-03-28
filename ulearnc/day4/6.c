#include<stdio.h>
void calculateSumAndProduct(int num1,int num2,int *sum,int*product)
{
    *sum=num1+num2;
    *product=num1*num2;
}
int main()
{
    int num1=10,num2=5,sum=0,product=0;
    printf("the values used are %d,%d and the sum and product before function call is %d,%d\n",num1,num2,sum,product);
    calculateSumAndProduct(num1,num2,&sum,&product);
    printf("after function call the sum and product are %d,%d\n",sum,product);
    return 0;
}