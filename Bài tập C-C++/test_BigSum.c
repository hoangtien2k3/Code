
// Tổng 2 số lớn trong C

#include<stdio.h>
#include<string.h>

int convert_string (char a[], char b[], int A[], int B[]) {
    int lenA = strlen(a);
    int lenB = strlen(b);
    int len;
    if (lenA > lenB) { // lấy ra chuỗi có độ dài lớn nhất
        len = lenA;
    } else {
        len = lenB;
    }
    lenA--;
    lenB--;
    for (int i =len - 1; i>=0; i--) {
        if (lenA >= 0) {
            A[i] = a[lenA] - '0';
            lenA--;
        } else {
            A[i] = 0;
        }
        if (lenB >= 0) {
            B[i] = b[lenB] - '0';
            lenB--;
        }
    }
    return len;
}

int big_sum (int A[], int B[], int C[], int len) {
    for (int i=len - 1; i>=0; i--) {
        if (i != 0) {
            int x = A[i] + B[i];
            C[i] = x % 10;
            B[i -1] += (x/10);
        } else {
            C[i] = A[i] + B[i];
        }
    }
    return len;
}


int main() {
    char a[1001] = "";
    char b[1001] = "";
    scanf ("%s%s", a, b);

    int A[1003];
    int B[1003];
    int C[1003];
    int len = convert_string(a, b, A, B);
    int lensum = big_sum(A, B, C, len);
    for (int i=0; i<lensum; i++) {
        printf ("%d", C[i]);
    }
    return 0;
}


