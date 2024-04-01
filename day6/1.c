#include<stdio.h>
int fibb(int no)
{   static int prev=1;
    static int next=1;
    if(no>2)
    {
        int temp=next;
        next=prev+next;
        prev=temp;
    }
    return next;
}
int main()
{   int no;
    printf("enter the value till which you need the fibonacci series");
    scanf("%d",&no);
    for(int i=1;i<=no;i++)
    {
        printf("%d place value in the fibonacci series is %d\n",i,fibb(i));
    }
}