#include <stdio.h>
#include <stdlib.h>
void show(int x)
{
    printf("The value of x is %d \n", x);
}
int compare(int x, int y)
{
    if (x>y) return x;
    else return y;
}

int main()
{
    void (*p)(int); // declaration of a pointer
    p = show;       // pointer pointing to function
    (*p)(7);       // calling function through pointer i.e show(7)
   int (*p1)(int,int);
    p1=compare;
    printf("Address of main function : %p\n",main);
    printf("Address of show function : %p\n",show);
    printf("Address of compare function : %p\n",compare);
    int max=(*p1)(30,20);
    printf("Max is : %d",max);
    return 0;
}
