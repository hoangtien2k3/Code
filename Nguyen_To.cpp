
#include<iostream>
#include<math.h>

bool nt(int a) {
    for (int i=2; i<=sqrt(a); i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return a > 1;
}

int main() {
    int n;
    std::cin >> n;
    int a[n];
    for (int i=0; i<n; i++) {
        std::cin >> a[i];
    }

    for (int i=0; i<n; i++)  {
        if (nt(a[i])) {
            std::cout << a[i] <<" ";
        }
    }
    return 0;
}