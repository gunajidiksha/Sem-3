#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a = NULL, n;
    printf("Hello world!\n");
    printf(" Enter Size of array n :");
    scanf("%d",&n);
    a=(int *) calloc(n, sizeof(int));
    printf("Enter array elements : \n");
    for(int i=0;i<n;i++)
    {
       printf("Enter a[%d] the element : ",i);
       scanf("%d",a+i);
    }
   printf(" Array of %d elements are : \t ",n);
   for(int i=0;i<n;i++)
   {
      printf(" %d \t ",*(a+i));
   }
   printf("\n");
   return 0;
}
