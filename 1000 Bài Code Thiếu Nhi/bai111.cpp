
//  Viết chương trình in ra tam giác cân có độ dài h.

#include<stdio.h>
#include<stdlib.h>
#include<math.h>


/*  a. vẽ tam giác cân
    với h = 4
                *
            *   *   *
        *   *   *   *   *   
    *   *   *   *   *   *   *
    
*/

void TamGiacCan(int h) {
    // c1:
    for (int i=1; i<=h; i++) {
        for (int j=1; j < 2*h; j++) {
            if (abs(h-j) <= (i-1)){
                printf (" * ");
            } else {
                printf ("   ");
            }
        }
        printf ("\n");
    }

    // c2:
    for (int i=1; i<=h; i++) {
		for (int j=1; j <= (2*h-1); j++) {
			if (h - i < j && j < h + i) {
				printf(" * ");
			} else {
                printf("   ");
            }
		}
		printf("\n");
	}

}




int main() {
    int h;
    do {
        printf ("\nNhap vao do dai h = ");
        scanf("%d", &h);
        if (h < 0) {
            printf ("Nhap lai chieu cao h: ");
        }
    }while(h < 0);

    TamGiacCan(h);


}
