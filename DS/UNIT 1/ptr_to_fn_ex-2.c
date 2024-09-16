#include <stdio.h>
#include <stdlib.h>
int Add(int, int);
int Sub(int, int);
int main()
{
    int a=30, b=20, sum;
    int diff;
    printf("Address of main function %p \n",main);
    printf("Address of Add function %p \n",Add);
    printf("Address of Sub function %p \n",Sub);
    sum=Add(a,b);
    diff=Sub(a,b);
    printf("Sum of a=%d and b=%d is : =%d \n",a,b,sum);
    printf("Difference of  of a=%d and b=%d is : =%d \n",a,b,diff);
    int (*fptr1) (int, int); // declaration of function pointer
    int (*fptr2) (int, int);
    fptr1=Add; // initialization of function pointer
    fptr2=Sub;
    sum=(*fptr1)(a,b); // calling ADD function through function pointer
    diff=(*fptr2)(a,b);
    printf("\n\n Result after calling through function pointer \n");
    printf("Sum of a=%d and b=%d is : =%d\n",a,b,sum);
    printf("Difference of a=%d and b=%d is : =%d",a,b,diff);
    return 0;
}
int Add(int a, int b)
{
    return(a+b);
}
int Sub(int a, int b)
{
    return(a-b);
}
