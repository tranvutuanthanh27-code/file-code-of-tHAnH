#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    char ch;

    cout << "nhap 1 ky tu :";
    cin >> ch;

    cout << "ky tu tren " << ch << "doi sang ma ASCII la :" << int(ch) << endl;

    if (ch >= 'a' && ch <= 'd')
    {
        cout << "chu hoa:" << char(toupper(ch)) << endl;
    }
    else if (ch >= 'A' && ch <= 'D')
    {
        cout << "chu thuong: " << char(tolower(ch)) << endl;
    }
    else
    {
        cout << "khong phai chu cai" << endl;
    }
    return 0;
}
