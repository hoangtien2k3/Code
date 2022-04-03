// đếm số lần xuất hiện của các phân tử trong mảng
/*
    ý tưởng là dùng thêm một mảng b[] cùng kích thước với mảng a[], để đánh dấu các phần tử đã được
    xét hoặc là chưa được xét. Dùng 2 vòng for để duyệt mảng, nếu phần tử nào đã được xét thì đánh
    dấu lại, làn lặp kết tiếp sẽ kiểm tra, nếu  giá trị đó đã xét thì bỏ qua còn chưa được xét
    thì tiến hành đếm số lần xuất hiện của nó.

*/
#include<stdio.h>
int a[100], b[100], n;

void dem(){
    for (int i=0; i<n; i++) {
        if (b[i]){ // nếu phần tử b[i] xuất hiện
            int count = 1;
            b[i] = 0; // gán phân tử đầu cần xét của vòng for thứ 1 bằng 0(để lần sau ko xét nữa)
            for (int j = i + 1; j <n; j++) {
                if (a[j] == a[i]) {
                    count++;
                    b[j] = 0;
                }
            }
            printf ("Gia tri %d xuat hien %d lan!\n", a[i], count);
        }
    }
}

int main() {
    printf ("Input n = ");
    scanf ("%d", &n);
    for (int i=0; i<n; i++) {
        printf ("a[%d] = ", i);
        scanf ("%d", &a[i]);
    }
    for (int i=0; i<n; i++) {
        b[i] = 1;
    }
    dem();
    return 0;
}