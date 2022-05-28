
/*
    a. Viết hàm xóa tất cả các khoảng trắng 
    b. Viết hàm xóa khoảng trắng ở đầu chuỗi và ở cuối chuỗi

    
*/


#include<stdio.h>
#include<string.h>
#include<math.h>


// Xóa tất cả các khoảng trắng có trong chuỗi
char *Xoa_Khoang_Trang(char *str, char *result) {
    int pos = 0;
    for(int i=0; i<strlen(str); i++) {
        if (str[i] == '\r' || str[i] == '\n' || str[i] == ' ') {
            continue;
        }
        result[pos++] = str[i];
    }
    return result;
}


// xóa tất cả các khoảng trắng
void Xoa(char str[], int vt) {
    int n = strlen(str);
    for(int i = vt  + 0; i < n; i++) {
        str[i] = str[i + 1];
    }
    str[n - 1] = '\0';
}

void Xoa_khoang_trang(char str[]) {
    for(int i=0; i<strlen(str); i++) {
        if (str[i] == ' ') {
            Xoa(str, i);
            i--;
        }
    }
}


int main() {
    char str[100];
    char result[100];
    printf("Nhap vao chuoi: ");
    gets(str);


    printf("\nXoa Khoang Trang: %s", Xoa_Khoang_Trang(str, result));


    Xoa_khoang_trang(str);
    printf("\n%s", str);


    return 0;
}