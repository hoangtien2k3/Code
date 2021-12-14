//
// Created by Hoàng Anh Tiến on 15/12/2021.
//

#include "iostream"
#include "math.h"
#include "iomanip"

using namespace std;

float Sum(int n) {
    float S = 1;
    for (int i=1; i<=n; i++) {
        S = (1 + 1.0)/ S;
    }
    return S;
}

int main() {
    int n;
    do {
        cout << "nhap vao n(dau can) : n = ";
        cin >> n;
        if (n < 1)  {
            cout << endl << "nhap lai gia tri n = ";
        }
    } while (n < 1);

    float S = Sum(n);
    cout << fixed << setprecision(6) << "Tong = " << S << endl;
    return 0;
}