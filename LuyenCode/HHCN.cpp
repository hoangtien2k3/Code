

#include<stdio.h>
#include<math.h>
#include<string.h>

int sum_Element_Array(char arr[], int A[], int B[]) {
    int lenA = strlen(arr);

    for (int i=0; i<LenA; i++) {
        A[i] = arr[i] - '0';
    }

    B[i] = sqrt((A[1]))
    

}

int main() {
    char arr[1001];
    int A[], B[];
    for (int i=0; i<3; i++) {
        scanf ("%s", &arr[i]);
    }
    printf ("%d", sum_Element_Array(arr));
    return 0;
}

/////////////
// int StrToNumArr (char a[], char b[], int A[], int B[]) {
//     int lenA = strlen (a);
//     int lenB = strlen (b);
   
//     int len;
//     if (lenA>lenB) len=lenA;
//     else len = lenB;
   
//     lenA--;
//     lenB--;
//     for (int i=len-1; i>=0; i--) {
//         if (lenA>=0) {
//             A[i] = a[lenA]-'0';
//             lenA--;
//         } else A[i]=0;
       
//         if (lenB>=0) {
//             B[i] = b[lenB]-'0';
//             lenB--;
//         } else B[i]=0;
//     }
//     return len;
// }

   