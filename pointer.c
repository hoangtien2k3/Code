
#include<stdio.h>

int main() {
    int a = 5;
    int *p = &a;
    printf ("%d", &a);
    printf ("\n%d", &p);
    printf ("%d", p);
    printf ("%d", *(&a));
    printf ("%d", *p);

}