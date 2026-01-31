#include <iostream>
using namespace std;

int main()
{
    double normalhours, overtimehours, rate, totalpay;
    double normalpay, overtimepay;

    cout << "nhap so gio lam viec la :";
    cin >> normalhours;
    cout << "nhap luong moi gio la :";
    cin >> rate;
    cout << "nhap so gio lam ngoai gio la :";
    cin >> overtimehours;

    normalpay = normalhours * rate;
    overtimepay = overtimehours * rate * 1.5;
    totalpay = overtimepay + normalpay;

    cout << "luong co ban la :" << normalpay << endl;
    cout << "luong tang ca ngoai gio la :" << overtimepay << endl;
    cout << "tong luong la :" << totalpay << endl;

    return 0;
}