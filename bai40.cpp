//
// Created by Hoàng Anh Tiến on 15/12/2021.
// Tiến Code ngu vcc

#include <iostream>
#include <math.h>
#include "iomanip"
#include "conio.h"

using namespace std;

int calSum (int n, int x) {
    float T,S;
    T = 1;
    S = 0;
    for (int i=1; i<=n; i++) {
        T = T * x;
        S = sqrt( T + S);
    }
    return S;
}

int main() {
    int n;
    float x;
    do {
        cout << "nhap vao gia tri n = ";
        cin >> n;
        if (n < 2) {
            cout << "\nnhap lai gia tri n  = ";
        }
    } while (n < 2);
    do {
        cout << "nhap vao gia tri x = ";
        cin >> x;
        if (x < 2) {
            cout << "\nnhap lai gia tri x = ";
        }
    } while (x < 2);

    float T = calSum(n,x);
//    cout << "Sum = " << T << endl;
    cout << fixed << setprecision(4) << T ;
    return 0;
}
