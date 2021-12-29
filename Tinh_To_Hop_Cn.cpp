
// Tính tổ hợp :  C = n! / k!(n - k)!​
// Điều kiện là :   1 <= k <= n <= 25

#include <iostream>
using namespace std;

int C(int k, int n)
{
    if (k == 0 || k == n)
        return 1;
    if (k == 1)
        return n;
    return C(k - 1, n - 1) + C(k, n - 1);
}

int main()
{
    int n, k;
    char TL;
    
    do {
        cout << "Nhap vao n = ";
        cin >> n;
        cout << "nhap vao k = ";
        cin >> k;
        if (n < k) {
            cout << "\nBan nhap sai, Xin nhap lai (n > k) :";
            cout << "\nNhap vao n = ";
            cin >> n;
            cout << "nhap vao k = ";
            cin >> k;
        }
        cout << "To hop C("<<k<<","<<n<<") = " << C(k, n) << endl;
        cout << "\nBan co muon tiep tuc khong(Y, N) : ";
        cin >> TL;
    } while (TL == 'Y' || TL == 'y');
    
    return 0;
}