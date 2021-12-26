#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    float a, b;
    float x ;
    cout << "nhap vao a = " ;
    cin >> a;
    cout << "\nnhap vao b = ";
    cin >> b;
    if (a == 0 && b == 0)
    {
        cout << "Phuong trinh vo so nghiem";
    }
    else if (a == 0 && b != 0)
    {
        cout << "Phuong trinh vo nghiem";
    }
    else if (a != 0)
    {
        cout << "\n" << fixed << setprecision(2) << "Nghiem pt : " << "x = " << -b / a;
    }
    return 0;
}