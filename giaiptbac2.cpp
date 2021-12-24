/*
giải phương trình bật 2 có dạng : ax^2 + bx + c = 0

để giải phương trình bậc 2 ta chia làm các trường hợp lớn và các trường hợp nhỏ có thể xảy ra
trường hợp 1: nếu a = 0 => phương trình có dạng bậc nhất bx + c = 0
              + b = 0 => phương trình vô nghiệm
              + b != 0 => phương trình có nghiệm : x = -c/b
trường hợp 2: nếu a != 0 => phương trình bậc 2 : ax^2 + bx + c = 0
             - delta = b^2 - 4ac
              nếu delta > 0 => phương trình có hai nghiệm phân biệt x1; x2
              + x1 = (-b + căn(delta))/2a
              + x2 = (-b - căn(delta))/2a
              nếu delta = 0 => phương trình có nghiệm kép x = x1 = x2 
              + x = x1 = x2
              nếu delta < 0 => phương trình vô nghiệm
*/

#include <iostream>
#include<math.h>
using namespace std;


void truongHop1(float a, float b, float c, float &x1, float &x2) {
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "\nPhuong trinh da cho vo nghiem";
            }   
        }
        if (b != 0) {
            cout << "\nPhuong trinh co nghiem don x = ";
            x1 = -c/b;
        }
    } else { // a != 0;
        float delta = b*b - 4*a*c;
        if (delta > 0) {
            cout << "\nPhuong trinh co hai nghiem phan biet x1, x2";
            x1 = (-b + sqrt(delta))/2*a;
            x2 = (-b - sqrt(delta))/2*a;
        }

        if (delta == 0) {
            cout << "\nPhuong trinh co nghiem kep x = x1 = x2";
            x1 = x2 = -b/2*a;
        } else {
            cout << "\nPhuong trinh vo nghiem";
        }
    }
}

int main() {
    float a, b, c;
    float x1, x2;
    float delta;
    cout << "\nNhap vao a = ";
    cin >> a;
    cout << "\nNhap vao b = ";
    cin >> b;
    cout << "\nNhap vao c = ";
    cin >> c;





    truongHop1(a, b, c, x1, x2);


    return 0;

}









