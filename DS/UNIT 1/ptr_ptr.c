#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    int *p = &a;
    int **q = &p;
    int ***r =&q;
    printf("Enter value of a :");
    scanf("%d",&a);
    printf("The value of a is :  %d \n",a);

    printf("Enter value of a :");
    scanf("%d",p);
    printf("The value of a through pointer p is :  %d \n",a);

    printf("Enter value of a :");
    scanf("%d",*q);
    printf("The value of a through pointer q is :  %d \n",a);

    printf("Enter value of a :");
    scanf("%d",**r);
    printf("The value of a through pointer r is :  %d \n",a);

    printf("Hello world!\n");
    return 0;
}
