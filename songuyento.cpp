/* 
số nguyên tố là số có 2 ước : là 1 và chính nó
sô nguyên tố dương nhỏ nhất là số 2
các số nguyên tố > số 2 đều là các số nguyên tố lẻ

*/
// Để tính : cách 1: ta đếm số ước => nếu có 2 ước thì là số nguyên tố
//                                 => nếu có lớn hơn 2 ước thì không phải là số nguyên tố



// CÁCH ĐƠN GIẢN NHẤT ĐỂ LÀM BÀI NÀY ĐÓ LÀ :
#include <stdio.h>
#include<math.h>

int songuyento (int n) {
    int count = 0;
    if (n < 2) {
        printf ("\n%d KHONG PHAI LA SO NGUYEN TO ");
    }

    for (int i = 2; i < n; i++) {  // i <= n-1 // i <= sqrt(n) ;
        /* có thể viết i < sqrt(n) vì mỗi số đều có 2 miền giá trị nên ta chỉ cần xét 1 miền gí trị
        mà không nhất thiết cần phải xét tất cả các gí trị đến n;
        sqrt(n) lấy căn bậc 2 của "n" thì ta có thể đỡ phải chạy nhiều vòng for, có thể tối ưu được code khi chạy;                              
        */
        if (n % i == 0) { // xét điều kiện coi biến đàn diền có thể là biến có giá trị bằng  == 0 hay không
            count++; // đếm xem có bao nhieu so chia het cho cái index dó
            printf ("\n%d chia het cho %d", n, i);
        }
    }
    if (count == 0) {
        printf ("\n%d LA SO NGUYEN TO ", n);
    } else {
        printf ("\n%d KHONG PHAI LA SO NGUYEN TO ", n);
    }

    return 0;
}

int main()
{
    int n, count = 0;
    do
    {
        printf("Nhap vao n (n > 0) = ");
        scanf("%d", &n);
        // if (n < 0) {
        //     printf ("Xin nhap lai, n (n > 0) = ");
        // }
    } while (n < 0 && printf("\nXin nhap lai!: "));

    songuyento(n);

    return 0;
}

// bool nguyenTo(int n)
// {
//     if (n < 2)
//         return false;
//     for (int i = 2; i <= (int)sqrt(n); i++)
//     {
//         if (n % i == 0)
//             return false;
//     }
//     return true;
// }
