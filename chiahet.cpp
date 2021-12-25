/*

Một hôm, Tài chơi một trò chơi về số chia hết. Luật chơi như sau:

Tài được Quản trò cho 1 số nn bất kì kèm thêm 2 số aa bb. Nhiệm vụ của cậu là trả lời thật nhanh xem số nn có chia hết cho các số không?

Nếu nn chia hết cho cả aa, bb thì trả lời "Co, tat ca!"
Nếu nn chỉ chia hết cho aa, mà không chia hết cho bb thì trả lời "Chi chia het cho aa,"
Nếu nn chỉ chia hết cho bb, mà không chia hết cho aa thì trả lời "Chi chia het cho bb."
Ngược lại thì trả lời "Khong chia het cho so nao ca."

*/
#include<bits/stdc++.h>
// #include <iostream>

void result(int n, int a, int b)
{
    if (n % a == 0 && n % b == 0)
    {
        std::cout << "Co, tat ca!";
    }
    else if (n % a == 0 || n % b == 0)
    {
        if (n % a == 0)
        {
            std::cout << "Chi chia het cho " << a << ',';
        }
        else if (n % b == 0)
        {
            std::cout << "Chi chia het cho " << b << '.';
        }
    }
    else
    {
        std::cout << "Khong chia het cho so nao ca.";
    }
}

int main()
{
    int n, a, b;
    std::cout << "nhap vao n = ";
    std::cin >> n;
    std::cout << "\nnhap vao a = ";
    std::cin >> a;
    std::cout << "\nnhap vao b = ";
    std::cin >> b;

    result(n, a, b);
    return 0;
}