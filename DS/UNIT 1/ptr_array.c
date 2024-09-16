#include <stdio.h>
#include <stdlib.h>
int * Max_element(int *pa, int size);
// array name itself is a pointer holding the address of first element of an array
// array name itself is the base address
int main()
{
    int i,*large, a[5]={10,20,30,40,50};
/*    for(i=0;i<5;i++)
    {
        printf("&a[%d] = %d a[%d] = %d \n",i,&a[i],i,a[i]);
    }
    int *p=a;
        printf("The relation between ptr p and array name a is %d  %d \n",p,a);
        printf("The relation between *p and array name a is %d  %d \n",*p,a);
        printf("The relation between p and a[0] is %d,%d \n",p,a[0]);
        printf("The relation between p+1 and &a[1] is %d, %d \n",p+1,&a[1]);
        printf("The relation between *(p+1) and a[1]is %d,%d \n",*(p+1),a[1]); */
// Accessing array elements using pointers
/*int *pa =a;
   for(i=0;i<5;i++)
    {
        printf("The address of a[%d] is %d \n",i,pa+i);
        printf("The value of a[%d] is %d \n",i,*(pa+i));
    }*/
    printf("Hello world!\n");
  large = Max_element(a, 5);
    printf("Largest element of an array  is %d \n",*large);
 /*  reverse(a,5);
    printf(" Reversed element : \n");
    for(i=0;i<5;i++)
    {
      printf("The value of a[%d] is %d \n",i,*(a+i));
    }
    return 0;
}*/
}
// Write a C program to find the largest element of an the array using pointers
int * Max_element(int *pa, int size)
{
    int i,j=0, max;
    max = *(pa);
    for(i=1;i<size;i++)
    {
        if (max < *(pa+i))
        {

              max = *(pa+i);
              j=i;
        }
    }
    return (pa+j);
}
//
// Write a C program to reverse the array elements using pointers
void swap(int *x, int *y)
{
    int temp = *x;
        *x = *y;
        *y = temp;
}

void reverse(int a[],int n)
{
    int *ptr1 = a; // base address and also address of first element of an array a
    int *ptr2 = a + (n-1); // address of last element of an array a
    while(ptr1 < ptr2)
    {
        swap(ptr1,ptr2);
        ptr1++;
        ptr2--;
    }

}
