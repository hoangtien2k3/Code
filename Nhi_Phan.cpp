/*
    Chuyển số nhị phân sang thập phân.
        Hệ thập phân: 1234 = 1 * 10^3 + 2 * 10^2 + 3 * 10^1 + 4 * 10^0
        Hệ nhị phân: 101 = 1 * 2^2 + 0 * 2^1 + 1 * 2^0

        1234 => 1*10^0 + 2* 10^1 + 3*10^2 + 4*10^3 = 4321 ( đảo ngược )

    Cách chuyển:
        n = 8
        0, 4 => 8 % 2 * 10 ^ 0
        0, 2 => 4 % 2 * 10 ^ 1
        0, 1 => 2 % 2 * 10 ^ 2
        1, 0 => 1 % 2 * 10 ^ 3
        int kq = 1000

        Mục đích mà nhân với 10^0 ... 10^4 là để đảo ngược số đó 
 */
 
// Cách 1:
#include <stdio.h>
#include <math.h>
 
long long Dec2Bin(int decimalNumber) 
{
    long long binaryNumber = 0;
    int i = 0;
    while (decimalNumber != 0)
    {
        binaryNumber += (decimalNumber % 2) * pow(10, i);
        i++;
        decimalNumber /= 2;
    }
    return binaryNumber;
}
 
int main()
{
    int decimalNumber;
    printf("\nInput decimalNumber: ");
    scanf("%d", &decimalNumber);
    printf("BinaryNumber = %d", Dec2Bin(decimalNumber));
}


///////
// Cách 2:
#include<stdio.h>  
#include<conio.h>  

int main(){  
    int a[10],n,i;  
    printf("Nhap mot so bat ky: ");  
    scanf("%d",&n);  
    for(i=0;n>0;i++)  
    {  
        a[i]=n%2;  
        n=n/2;  
    }  
    printf("\nDang nhi phan cua so vua nhap la = ");  
    for(i=i-1;i>=0;i--)  
    {  
        printf("%d",a[i]);  
    }  
}