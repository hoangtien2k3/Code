// tính giai  thừa n! ;

#include <iostream>
using namespace std;

long giaiThua(long n)
{
    long T = 1;
    for (int i = 1; i <= n; i++)
    {
        T = T * i;
    }
    return T;
}

int main()
{
    long n, T;
    cout << "nhap vao n = ";
    cin >> n;

    cout << giaiThua(n);
    return 0;
}