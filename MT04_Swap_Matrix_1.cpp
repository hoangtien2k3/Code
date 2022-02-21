

#include <iostream>

int main()
{
    int m, n, x;
    std::cin >> m >> n >> x;
    int arr[m][n];

    int brr[n]; // mang phu

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            std::cin >> arr[i][j];
            if ((x - 1) == i) // Vi: x(1 -> m) con i(0 -> m - 1).
            {
                brr[j] = arr[i][j]; // xep cac phan tu mang 2 chieu qua mang 1 chieu
            }
        }
    }

    // sap xep // interchangeSort 

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (brr[i] > brr[j])
            {
                std::swap(brr[i], brr[j]);
            }
        }
    }

    // xuat

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((x - 1) == i)
            {
                std::cout << brr[j] << ' ';
            }
            else
            {
                std::cout << arr[i][j] << ' ';
            }
        }
        std::cout << std::endl;
    }
}