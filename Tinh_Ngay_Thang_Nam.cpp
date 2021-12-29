
/*
Kiểm tra coi tháng đó có bao nhiêu ngày, bằng cách nhập vào tháng và năm

Lưu ý: năm nhuận thì tháng 2 có 29 ngày, không nhuận thì tháng 2 có 28 ngày;
*/
#include <iostream>

int ngay(int month, int year)
{
    if (month < 0 || month > 12 || year <= 0 || year > 100000)
    {
        std::cout << "INVALID";
    }
    else
    {
        switch (month)
        {
        case 1:
            std::cout << "31";
            break;
        // case 2:
        //     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        //     {
        //         std::cout << "29";
        //     }
        //     else
        //     {
        //         std::cout << "28";
        //     }
        //     break;
        case 3:
            std::cout << "Co so ngay la " << "31";
            break;
        case 4:
            std::cout << "Co so ngay la " << "30";
            break;
        case 5:
            std::cout << "Co so ngay la " << "31";
            break;
        case 6:
            std::cout << "Co so ngay la " << "30";
            break;
        case 7:
            std::cout << "Co so ngay la " << "31";
            break;
        case 8:
            std::cout << "Co so ngay la " << "31";
            break;
        case 9:
            std::cout << "Co so ngay la " << "30";
            break;
        case 10:
            std::cout << "Co so ngay la " << "31";
            break;
        case 11:
            std::cout << "Co so ngay la " << "30";
            break;
        case 12:
            std::cout << "Co so ngay la " << "31";
            break;
        default:
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            {
                std::cout << "Co so ngay la " << "29";
            }
            else
            {
                std::cout << "Co so ngay la " << "28";
            }
            break;
        }
    }
    return 0;
}

int main()
    {
        int month, year;
        std::cout << "Nhap vao month = ";
        std::cin >> month;
        std::cout << "Nhap vao year = ";
        std::cin >> year;

        ngay(month, year);
        return 0;
    }