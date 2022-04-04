
// Tổng 2 số lớn trong C

#include <stdio.h>
#include <string.h>

int StrToNumArr(char a[], char b[], int A[], int B[])
{
    int lenA = strlen(a);
    int lenB = strlen(b);

    int len; 
    if (lenA > lenB) 
        len = lenA; 
    else 
        len = lenB; 
    lenA--; 
    lenB--;
    for (int i = len - 1; i >= 0; i--) 
    {
        if (lenA >= 0)
        {
            A[i] = a[lenA] - '0';
            lenA--;
        }
        else
            A[i] = 0;

        if (lenB >= 0)
        {
            B[i] = b[lenB] - '0';
            lenB--;
        }
        else
            B[i] = 0;
    }
    return len;
}

int SumBig(int A[], int B[], int C[], int len)
{
    for (int i = len - 1; i >= 0; i--)
    {
        if (i != 0) // 0 
        {
            int x = A[i] + B[i];
            C[i] = x % 10;
            B[i - 1] = B[i - 1] + (x / 10);
        }
        else
            C[i] = A[i] + B[i]; 
    }
    return len;
}


int main()
{
    char a[1001] = "";
    char b[1001] = "";
    printf ("Nhap vao a = "); scanf ("%s", a);
    printf ("Nhap vao b = "); scanf ("%s", b);

    int A[1003];
    int B[1003];
    int C[1003]; // để lưu kết quả a + b
    int len = StrToNumArr(a, b, A, B);
    int lenSum = SumBig(A, B, C, len); // lấy độ dài mảng C[]

    printf ("Tong a + b = ");
    for (int i = 0; i < lenSum; i++)
    {
        printf("%d", C[i]);
    } 

    printf("\n");
    return 0;
}