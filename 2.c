/*
    Một số nguyên dạng Palindrome là số mà đọc từ trái qua phải hay từ phải qua trái đều giống nhau

    ví dụ các số Palindrome: 101, 22, 123321.

    Nhập vào một mảng n số nguyên a1, a2, ... an. Hãy in ra các số Palindrome theo đúng thứ tự nhập.

    - Dòng thứ nhất là chiều dài n của mảng (1<= n <= 1000)
    - Dòng thứ hai gồm n số nguyên a1, a2, a3, ... an(0<= ai<= 109)
*/

#include <stdio.h>
#include <stdbool.h>
// VD: 123456
//  Cách 1: Ta đi đảo ngược phần tử của mảng a[] và kiểm tra xem, trước khi đảo ngược và sau khi đảo ngược nó có giống nhau không
int daoNguoc(int n)
{
    int du, res = 0;
    while (n != 0)
    {                        // n là phân tử đầu tiên của mảng a[0] , n = 123456
        du = n % 10;         // du = 123456 % 10 = 6
        res = res * 10 + du; // res = 0 * 10 + 6 = 6
        n = n / 10;          // loại bỏ số cuối, n = 123456 / 10 = 12345
    }
    return res; // số đảo ngược : res = 654321
}
bool Check(int n)
{
    return (daoNguoc(n) == n) ? true : false;
    // Syntax: toán tử 3 ngôi oke , hoặc có thể dùng if_else hoặc hay hơn nữa là: return (daoNguoc(n) == n) trình duyệt cùng hiểu
}

int main()
{
    int n, arr[1000];
    printf("nhap vao n = ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("nhap vao a[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 1; i <= n; i++)
    {
        if (Check(arr[i]))
        {
            printf("%d ", arr[i]);
        }
    }
}

// Cách 2:  Tạo ra hai mảng a[1000] và b[1000], cho các phần tử của mảng a[] sang mảng b[](nhưng đảo ngược các phần tử đó lại),
//          để kiểm tra xem hai mảng khi đảo ngược nó có giống nhau không -> Palinprome hay là không
// bool check(int n)
// {
//     int a[10000], b[10000];
//     int i = 0;
//     for (; n != 0;) // n chính là phần tử đầu tiên của mảng hay n là a[0]
//     {
//         a[i] = n % 10; // a[i] = 1223321 % 10 = 1
//         n /= 10;       // n = 123321 / 10 = 12332
//         i++;           // i = 1
//     }                  // khi vòng for hạy hết a[0] = 123321 thì i = 6
//     int h = 0;
//     int count = 0;
//     for (int k = i - 1; k >= 0; k--)
//     {
//         b[h] = a[k];
//         h++;
//     } // mục dích của vòng lặp này để gán ngược các phần tử của a[i] cho b[i] để so sánh
//     for (int k = 0; k < i; k++)
//     {
//         if (a[k] == b[k])
//             count++;
//     }
//     return (count == i) ? true : false;
// }

// int main()
// {
//     int a[10000];
//     int n;
//     int count = 0;
//     scanf ("%d", &n);
//     for (int i = 0; i < n; i++)
//         scanf ("%d", &a[i]);
//     for (int i = 0; i < n; i++)
//     {
//         if (check(a[i]) == true)
//             printf ("%d ", a[i]);
//     }
// }
