
#include<stdio.h>
#include<conio.h>
#include<math.h>

int CheckOut(int month, int year) {
    switch(month) {
        case 1:
            printf ("Co 31 ngay");
            break;
        case 2:
            if (year % 4 == 0 && year % 100 == 0 || year % 400 == 0) {
                printf ("Co 29 ngay");
            } else {
                printf ("Co 28 ngay");
            }
            break;
        case 3: 
            printf ("Co 31 ngay");
            break;
        case 4:
            printf ("Co 30 ngay");
            break;
        case 5:
            printf ("Co 31 ngay");
            break;
        case 6:
            printf ("Co 30 ngay");
            break;
        case 7:
            printf ("Co 31 ngay");
            break;
        case 8: 
            printf ("Co 31 ngay");
            break;
        case 9:
            printf ("Co 30 ngay");
            break;
        case 10:
            printf ("Co 31 ngay");
            break;
        case 11:
            printf ("Co 30 ngay");
            break;
        case 12:
            printf ("Co 31 ngay");
            break;
        default:
            if (year % 4 == 0 && year % 100 == 0 || year % 400 == 0) {
                printf ("Co 29 ngay");
            } else {
                printf ("Co 28 ngay");
            }
            break;
    }
}


int main() {
    int month, year;
    scanf ("%d%d", &month, &year);
    CheckOut(month, year);
    return 0;
}