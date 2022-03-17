
/*
    Both are equivalent. Take a look at the following:
    + int[] array;
    // is equivalent to
    int array[];

    + int var, array[];
    // is equivalent to
    int var;int[] array;



*/

#include<stdio.h>
#include<stdlib.h>

struct arr_integer
{
  int size;
  int * arr;
};

int adjacentElementsProduct(struct arr_integer inputArray);

int main()
{
    int res,i;
    struct arr_integer array;
    printf("Enter size of the array: ");
    scanf("%d", &array.size);
    array.arr = malloc(array.size * sizeof(*array.arr));
    
    for (int i=0; i<array.size; i++) {
        printf ("arr[%d] = ", i);
        scanf ("%d", &array.arr[i]);
    }

    for (int i=0; i<array.size; i++) {
        printf ("%d ", array.arr[i]);
    }

    return 0;
}



///////////



