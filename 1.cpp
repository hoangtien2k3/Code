
//   S= 1/2 + 1/3 + ... + 1/n

#include <iostream>
#include <iomanip>

float tinhToan(float n)
{
    float sum = 0;
    int i = 2;
    for (int i = 2; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    return sum;
}
int main()
{
    float n;
    std::cout << "Nhap vao n = ";
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(4) << tinhToan(n);
    return 0;
}