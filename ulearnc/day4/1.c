#include<stdio.h>
int main()
{
      int arr[]={20,30,40,50};
      int *ptr=arr;
      printf("the values in the array are ");
      for(int i=0;i<4;i++) printf("%d ",*ptr++);
      
}