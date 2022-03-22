// đến số lần xuất hiện của các phần tử trong mảng

#include <iostream>
using namespace std;
 
const int MAX = 1e6; // 1e6 = 1 * 10^6
int cnt[MAX];

int main(){
    int n;
    do{
        cout << "\nNhap n = ";
        cin >> n;
    }while(n < 1);
    int a[n];
    for(int i = 0; i < n;i++){
        do{
            cout << "\nNhap a[" << i << "] = ";
            cin >> a[i];
        }while(a[i] < 0);
    }
    for(int i = 0;i < MAX; i++) cnt[i] = 0;
    for(int i = 0; i < n;i++){
        cnt[a[i]]++;
    }
    for(int i = 0;i < MAX; i++){
        if(cnt[i] > 0){
            cout << "Gia tri " << i << " xuat hien " << cnt[i] << " lan!\n";
        }
    }
}




