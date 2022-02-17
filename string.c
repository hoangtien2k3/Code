
#include<stdio.h>
#include<math.h>
#include<stdbool.h>

bool input (char *s) {
    
}


void string (char *s) {

    // do {
    //     printf ("Nhap vao chuoi s : ");
    //     gets (s);
    //     if ()
    // } while();


    gets (s);
    printf ("%s", s);
}

int main() {
    char str[10];
    char *s = &str[10];
    string (str);
    
    return 0;

}