
#include<stdio.h>
#include<math.h>
#include<string.h>

int sum_Element_Array(int arr[]) {
    int a, b, c, sum = 0;
    a = sqrt((arr[1] * arr[2]) / arr[0]);
    b = arr[1]/a;
    c = arr[0]/b;

    sum = (a+b+c)*4;
    return sum;
}


int main() {
    int arr[3];
    for (int i=0; i<3; i++) {
        scanf ("%d", &arr[i]);
    }


    printf ("%d", sum_Element_Array(arr));


    return 0;


}



   