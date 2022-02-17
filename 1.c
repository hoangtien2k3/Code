/*
Số tự nhiên N được gọi là số đẹp nếu cộng các chữ số của N lại ta có một số mà kết thúc bằng 9.

    Ví dụ một số số đẹp là 18(1 + 8 = 9),
    234(2 + 3 + 4 = 9), 658(6 + 5 + 8 = 19).

    Cho một số N, hãy kiểm tra xem N có phải là số đẹp hay không.

    Nếu N là số đẹp, in ra "YES", nếu không in ra "NO"
*/

#include <stdio.h>
// vd : 658 = 6 + 5 + 8 = 19 -> 9
int sodep(int n)
{
    int sum = 0, res;
    while (n)
    {
        sum += n % 10;
        n /= 10;
    } // sum = 19
    res = sum % 10;
    if (res == 9) {
        printf ("YES");
    } else {
        printf ("NO");
    }
}

int main()
{
    int n;
    printf ("nhap vao n = ");
    scanf("%d", &n);
    sodep(n);
    return 0;
}