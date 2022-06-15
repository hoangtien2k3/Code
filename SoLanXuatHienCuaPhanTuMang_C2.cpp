// // đến số lần xuất hiện của các phần tử trong mảng

// #include <iostream>
// using namespace std;
 
// const int MAX = 1e6; // 1e6 = 1 * 10^6
// int cnt[MAX];

// int main(){
//     int n;
//     do{
//         cout << "\nNhap n = ";
//         cin >> n;
//     }while(n < 1);
//     int a[n];
//     for(int i = 0; i < n; i++){
//         do{
//             cout << "arr[" << i << "] = ";
//             cin >> a[i];
//         }while(a[i] < 0);
//     }
//     for(int i = 0; i < MAX; i++) 
//         cnt[i] = 0;
//     for(int i = 0; i < n; i++){
//         cnt[a[i]]++;
//     }
//     for(int i = 0; i < MAX; i++){
//         if(cnt[i] > 0){
//             cout << "Gia tri " << i << " xuat hien " << cnt[i] << " lan!\n";
//         }
//     }
// }



// Tìm tần xuất lẻ xuất hiện
#include <iostream>
using namespace std;
 
const int MAX = 1e6; // 1e6 = 1 * 10^6
int cnt[MAX];
const int ma = 1e7;
int a[ma];
int n;

void Find(int n) {
    for(int i = 0; i < MAX; i++) 
        cnt[i] = 0;
    for(int i = 0; i < n; i++){
        cnt[a[i]]++;
    }
    for(int i = 0; i < MAX; i++){
        if(cnt[i] == 1){
            cout << i << endl;
        }
    }
}

int main(){
	cin >> n;
	for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    Find(n);
    return 0;
}




