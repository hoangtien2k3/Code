#include<stdio.h>
#include<conio.h>
#include<math.h>

int main() {
    int n;
    float x, T=1, sum=0;
    scanf ("%f", &x);
    scanf ("%d", &n);
    for (int i=1; i<=n; i++) {
        T += i;
        sum = pow(x, i)/T;
    } 
    printf ("%f", sum);
    getch();
    return 0;
}