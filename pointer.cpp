

#include<iostream>
using namespace std;

int main() {
    // char s1 = "aabcc";


    // char *p = &s1;
    // int a ;
    // a = 10;
    
    // int a = 10;

    


    //cout << p;
    // s1[0] = 'J';
    // s2[0] = 'J';
    // char *s1 = "Hello world";
    char s2[] = "Hello world";
    int length = sizeof(s2) / sizeof(s2[0]);
    printf ("%d", sizeof(s2));
    // cout << &*s1 << endl;
    // cout << &s2;
    


    // cout << s2[0];
    


    return 0;
}