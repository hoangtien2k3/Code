
/*
Hàm đệ quy dùng như thế nào, và khi nào cần dùng hàm đệ quy để tính toán :

VD : S(n) = 1 + 2 + 3 + ... + n (n phần tử) : C1 dùng vòng for 
                                              C2 dùng đệ quy

void recurse() { // Đệ quy
    ...
    recurse(); // đệ quy
    ...
}
int main() {
    ...
    recurse();
    ...
}

*/

/* Cấu trúc của hàm đệ quy
{
    if (điều kiện dừng của hàm đệ quy) 
        // làm gì đó
    else 
        // Thực hiện gọi đệ quy
}

*/ // VD: tính n! = n * (n - 1) * (n - 2) * ... * 1

#include<iostream>
using namespace std;

int giaiThua (int n) {
    if (n == 1 || n == 0) {
        return 1;
    }
    return n * giaiThua (n - 1);
}
int main() {
    int n;
    cout << "nhap vao n = ";
    cin >> n;
    cout << ""<<n<<"" << "! = " << giaiThua(n);
    return 0;
}




// 