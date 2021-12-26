/*
 phuong trinh ax + b = 0
 b=0, c=0 phương trình vô số nghiệm
 b=0, c!=0 phương trình vô nghiệm
 b!=0 phương trình có nghiệm x= -b/c
*/

#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

// int main()
// {
//     float a, b;
//     float x ;
//     cout << "nhap vao a = " ;
//     cin >> a;
//     cout << "\nnhap vao b = ";
//     cin >> b;
//     if (a == 0 && b == 0)
//     {
//         cout << "Phuong trinh vo so nghiem";
//     }
//     else if (a == 0 && b != 0)
//     {
//         cout << "Phuong trinh vo nghiem";
//     }
//     else if (a != 0)
//     {
//         cout << "\n" << fixed << setprecision(2) << "Nghiem pt : " << "x = " << -b / a;
//     }
//     return 0;
// }

int main() {
    float a,b;
    cout << "nhap vao a = ";
    cin >> a ;
    cout << "\nnhap vao b = ";
    cin >> b;
    if (a == 0) {
        if (b == 0) {
            cout << "phuong trinh vo so nghiem";
        }
        if (b != 0) {
            cout << "phuong trinh vo nghiem";
        }
    }
    if (a != 0) {
        cout << "\n" << fixed << setprecision(2) << "x = " << -b/a;
    }
    return 0;
}
