#include <stdio.h>
#include <stdlib.h>

int main()
{

   /* int a =100;
    int *pa =&a;
    printf("Hello world!\n");
    printf("value is a : - %d \n ",a);
    printf(" address of a is : - %p \n",&a);
    printf("Value pointer pa holding the address of a is : -  %p \n",pa);
    printf("Value of a through pointer pa is : - %d \n",*pa);*/
/* Reading the data value into s memory using pointer */
/*int *pb = NULL;
    pb=(int *) malloc(sizeof(int));
    *pb = 200;
    printf(" Value of pointer pa is - : %p \n",pb);
    printf(" Value stored in the address %p pointed by pb is - : %d \n",pb,*pb);*/

// write a C program to add two numbers using pointer

/*   float a=100,*pa;
    float b=200,*pb;
    float sum;
    pa = &a;
    pb = &b;
    sum = *pa + *pb;
    printf("\n\n Using pointer the sum of a = %f and b = %f is %f \n",a, b, sum); */
// Write a C program to add two numbers using call by reference
    int x =100, y=200, sum;
    Add_Numbers(x,y,&sum);
    printf("\n\nUsing call by reference the sum of a = %d and b = %d is %d \n",x, y, sum);
// W?*write a C program find Maximum of two numbers using pointers

    return 0;
}
void Add_Numbers(int x, int y, int *psum)
{
    *psum = x + y ;
}
